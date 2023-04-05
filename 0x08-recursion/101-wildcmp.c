#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings and returns 1 if identical, 0 otherwise
 * @s1: first string to compare
 * @s2: second string to compare (may contain wildcard *)
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
	if (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0'))
		return (1);
	return (0);
}
if (*s2 == '\0')
	return (0);
if (*s2 == '*')
{
	if (*(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*(s2 + 1) == '\0')
		return (1);
	else if (*s1 == *(s2 + 1))
		return (wildcmp(s1 + 1, s2 + 2) || wildcmp(s1 + 1, s2));
	else
		return (wildcmp(s1 + 1, s2));
}
if (*s1 != *s2)
	return (0);
return (wildcmp(s1 + 1, s2 + 1));
}

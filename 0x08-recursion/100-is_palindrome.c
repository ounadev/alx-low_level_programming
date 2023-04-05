#include "main.h"
#include <stdio.h>
/**
 * is_palindrome_helper - helper function for is_palindrome
 * @s: the string to check
 * @len: the length of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int len)
{
if (len < 2)
	return (1);
if (s[0] != s[len - 1])
	return (0);
return is_palindrome_helper(s + 1, len - 2);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len;
for (len = 0; s[len]; len++)
	;
return is_palindrome_helper(s, len);
}


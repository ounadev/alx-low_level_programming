#include "main.h"
/**
 * _strlen - Computes the length of a string
 *
 * @s: A pointer to the string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
	len++;
	s++;
}
return (len);
}

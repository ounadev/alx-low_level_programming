#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;
while (*dest_end)
	dest_end++;
while (*src)
	*dest_end++ = *src++;
*dest_end = '\0';
return (dest);
}

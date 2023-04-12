#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 *
 * @str: the string to copy.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

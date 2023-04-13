#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes of s2 to concatenate to s1.
 *
 * Return: Pointer to newly allocated space in memory with s1, followed by
 * the first n bytes of s2 and null terminated, or NULL if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len, s2_len, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;

	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concat_str = malloc(sizeof(char) * (s1_len + n + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < n; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}

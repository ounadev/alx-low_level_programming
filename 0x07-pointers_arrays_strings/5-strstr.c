#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                        of the substring.
 *         If the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	while (*haystack != '\0')
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*needle_ptr == *haystack_ptr && *needle_ptr != '\0'
		       && *haystack_ptr != '\0')
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

#include "main.h"
#include <stdlib.h>
/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int i, count = 0;
for (i = 0; str[i] != '\0'; ++i)
{
	if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
{
		++count;
}
}
return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
int i, j, k, len, words;
char **tab;
if (str == NULL || *str == '\0')
{
	return (NULL);
}
words = count_words(str);
tab = malloc((words + 1) * sizeof(char *));
if (tab == NULL)
{
	return (NULL);
}
for (i = 0, k = 0; i < words; ++i)
{
	while (str[k] == ' ')
{
		++k;
}
	len = 0;
	while (str[k + len] != ' ' && str[k + len] != '\0')
{
		++len;
}

	tab[i] = malloc((len + 1) * sizeof(char))
	if (tab[i] == NULL)
{
	for (j = 0; j < i; ++j)
{
		free(tab[j]);
}
	free(tab);
	return (NULL);
}
	for (j = 0; j < len; ++j)
{
		tab[i][j] = str[k + j];
}
	tab[i][j] = '\0';
	k += len;
}
tab[i] = NULL;
return (tab);
}

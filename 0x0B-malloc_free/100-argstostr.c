#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: an array of strings containing the arguments
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
  char *str;
  int i, j, len = 0, pos = 0;

  if (ac == 0 || av == NULL)
    return (NULL);

  /* Calculate the total length of all strings */
  for (i = 0; i < ac; i++)
  {
    for (j = 0; av[i][j] != '\0'; j++)
      len++;
    len++; /* Add one for the newline character */
  }
  len++; /* Add one for the null terminator */

  /* Allocate memory for the concatenated string */
  str = malloc(len * sizeof(char));
  if (str == NULL)
    return (NULL);

  /* Copy the strings and add newline characters */
  for (i = 0; i < ac; i++)
  {
    for (j = 0; av[i][j] != '\0'; j++)
    {
      str[pos] = av[i][j];
      pos++;
    }
    str[pos] = '\n';
    pos++;
  }
  str[pos] = '\0';

  return (str);
}


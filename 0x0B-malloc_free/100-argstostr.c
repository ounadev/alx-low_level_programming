#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: If memory allocation fails, NULL.
 *         Otherwise, a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, len = 0, pos = 0;

    if (ac == 0 || av == NULL)
        return (NULL);
for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            len++;
        len++;
    }
str = malloc(len * sizeof(char));
    if (str == NULL)
        return (NULL);
 for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
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

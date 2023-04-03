#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search
 * @accept: the set of bytes to look for
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    char *p;
    int i;

    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                p = s;
                return (p);
            }
        }
        s++;
    }

    return (NULL);
}

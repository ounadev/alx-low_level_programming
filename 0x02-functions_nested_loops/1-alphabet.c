#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    putchar('\n');
}


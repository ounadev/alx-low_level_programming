#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 26; j++) {
            putchar(j + 'a');
        }
        putchar('\n');
    }
}


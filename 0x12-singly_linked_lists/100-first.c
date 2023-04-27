#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) called_first(void);

/**
 * called_first - Function that prints a message before the main function
 * is executed
 *
 * Return: void
 */
void called_first(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}

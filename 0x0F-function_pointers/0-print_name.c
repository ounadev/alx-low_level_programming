#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: pointer to a function that takes a char* argument
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}


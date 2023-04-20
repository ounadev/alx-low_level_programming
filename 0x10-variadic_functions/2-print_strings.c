#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: variable arguments containing the strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
	str = va_arg(args, char *);
	printf("%s", str ? str : "(nil)");
	if (i != n - 1 && separator)
		printf("%s", separator);
}
printf("\n");
va_end(args);
}

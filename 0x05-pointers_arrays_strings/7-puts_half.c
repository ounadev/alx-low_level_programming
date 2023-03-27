#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int length = 0, half_length, i;

	while (str[length] != '\0')
		length++;

	half_length = (length + 1) / 2;

	for (i = half_length; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

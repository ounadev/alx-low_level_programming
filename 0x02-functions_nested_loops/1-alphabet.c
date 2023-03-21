#include <stdio.h>
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * This function prints the lowercase alphabet from 'a' to 'z', inclusive,
 * followed by a new line character to standard output.
 *
 * Return: void
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
	_putchar(c);
	c++;
}
_putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 * @c: character to check
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}

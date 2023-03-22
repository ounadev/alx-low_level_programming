#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 * @n: starting number to print
 * Return: void
 */
void print_to_98(int n)
{
if (n <= 98)
{
	for (int i = n; i < 98; i++)
{
		printf("%d, ", i);
}
}
else
{
	for (int i = n; i > 98; i--)
{
		printf("%d, ", i);
}
}
printf("98\n");
}

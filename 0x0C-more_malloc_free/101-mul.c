#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - prints "Error" and exits with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - multiplies two positive numbers represented as strings
 * @num1: the first number
 * @num2: the second number
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry = 0;
	int *result;
	
	while (num1[len1])
	{
		if (!_isdigit(num1[len1]))
			print_error();
		len1++;
	}
	while (num2[len2])
	{
		if (!_isdigit(num2[len2]))
			print_error();
		len2++;
	}
	result = calloc(len1 + len2, sizeof(int));
	if (!result)
		exit(98);
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = result[i + j + 1] + mul + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] = carry;
	}
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;
	if (i == len1 + len2)
		printf("0\n");
	else
	{
		while (i < len1 + len2)
			printf("%d", result[i++]);
		printf("\n");
	}
	free(result);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_error();
	}
	multiply(argv[1], argv[2]);
	return (0);
}


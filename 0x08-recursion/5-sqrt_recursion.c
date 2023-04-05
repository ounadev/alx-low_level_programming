#include "main.h"
/**
 * helper - finds the square root of n using recursion
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int helper(int n, int i);
/**
 * _sqrt_recursion - finds the square root of a number using recursion
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
return (helper(n, 1));
}

/**
 * helper - finds the square root of n using recursion
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int helper(int n, int i)
{
    if (i * i == n)
        return (i);
    if (i * i > n)
        return (-1);
    return (helper(n, i + 1));
}


#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: square root of n, -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0 || n == 1)
        return (n);
    return (helper(n, 1));
}

/**
 * helper - finds the square root of a number recursively
 * @n: input number
 * @i: integer to check as a potential square root
 *
 * Return: square root of n, -1 if n does not have a natural square root
 */
int helper(int n, int i)
{
    if (i * i == n)
        return (i);
    if (i * i > n)
        return (-1);
    return (helper(n, i + 1));
}

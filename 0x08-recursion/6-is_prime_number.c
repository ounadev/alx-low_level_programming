#include "main.h"
#include <stdio.h>
/**
 * is_prime - checks if a number is prime
 * @n: the number to check
 * @div: the current divisor to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int div)
{
    if (n < 2)
        return (0);
    if (div == n)
        return (1);
    if (n % div == 0)
        return (0);
    return (is_prime(n, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
    return (is_prime(n, 2));
}

#include "main.h"
#include <stdio.h>
/**
 * is_palindrome_helper - helper function for is_palindrome
 * @s: the string to check
 * @len: the length of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int len)
{
    /* Base case: empty string or single character is a palindrome */
    if (len < 2)
        return 1;

    /* Compare first and last characters */
    if (s[0] != s[len - 1])
        return 0;

    /* Recursively check substring between first and last characters */
    return is_palindrome_helper(s + 1, len - 2);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len;

    /* Find length of string */
    for (len = 0; s[len]; len++)
        ;

    /* Recursive helper function */
    return is_palindrome_helper(s, len);
}


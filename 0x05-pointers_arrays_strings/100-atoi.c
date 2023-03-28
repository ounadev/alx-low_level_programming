#include "main.h"
#include <limits.h>  // for INT_MIN

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int max_div_10 = INT_MAX / 10;
    int digit;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            digit = *s - '0';
            if (result > max_div_10 || (result == max_div_10 && digit > INT_MAX % 10))
            {
                // overflow detected
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = result * 10 + digit;
        }
        else if (result > 0)
            break;
        s++;
    }

    return (result * sign);
}


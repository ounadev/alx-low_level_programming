#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *     c: char
 *     i: integer
 *     f: float
 *     s: char * (if the string is NULL, print (nil) instead)
 *     any other char should be ignored
 */
void print_all(const char * const format, ...)
{
    va_list ap;
    const char *format_spec = format;
    char *str_value;
    int int_value, i = 0;
    float float_value;
    char separator = '\0';

    va_start(ap, format);

    while (format_spec && *format_spec)
    {
        switch (*format_spec)
        {
            case 'c':
                printf("%c", va_arg(ap, int));
                separator = ',';
                break;
            case 'i':
                int_value = va_arg(ap, int);
                printf("%d", int_value);
                separator = ',';
                break;
            case 'f':
                float_value = va_arg(ap, double);
                printf("%f", float_value);
                separator = ',';
                break;
            case 's':
                str_value = va_arg(ap, char *);
                if (!str_value)
                    str_value = "(nil)";
                printf("%s", str_value);
                separator = ',';
                break;
            default:
                separator = '\0';
                break;
        }
        if (*(format_spec + 1) && separator)
            printf("%c ", separator);

        format_spec++;
    }

    va_end(ap);
    printf("\n");
}


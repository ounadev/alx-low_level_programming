#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the strings passed as arguments to the program
 *
 * Return: 0 if successful, 98, 99, or 100 if there was an error
 */
int main(int argc, char **argv)
{
    int num1, num2, result;
    char *op;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op = argv[2];

    op_func = get_op_func(op);
    if (op_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if ((*op == '/' || *op == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = op_func(num1, num2);
    printf("%d\n", result);

    return (0);
}

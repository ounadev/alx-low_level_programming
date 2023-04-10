#include <stdio.h>
#include <stdlib.h>  // for atoi function

/**
 * main - adds positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: 0 if successful, 1 if any argument contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
    int i, j, sum = 0;

    if (argc == 1)  // if no number is passed to the program, print 0
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)  // start the loop from the second argument
    {
        for (j = 0; argv[i][j] != '\0'; j++)  // check if each character in the argument is a digit
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);  // convert the string to integer and add it to the sum
    }

    printf("%d\n", sum);  // print the sum
    return (0);
}

#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: the number of arguments passed
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    printf("%d\n", argc - 1);
    return (0);
}


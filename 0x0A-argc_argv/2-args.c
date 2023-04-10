#include <stdio.h>
/**
 * main - entry point function for printing all command line arguments
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing all arguments passed to the program
 * Return: 0 on successful execution
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}

#include <stdio.h>
/*
main - entry point function for printing all command line arguments
@argc: number of arguments passed to the program
@argv: array of strings containing all arguments passed to the program
This function takes in the number of arguments passed to the program and an array
of strings containing all the arguments. It then prints each argument on a separate
line using a for loop.
Return: 0 on successful execution
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

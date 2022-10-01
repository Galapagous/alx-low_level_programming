#include <stdio.h>

/**
 * main - Program to print number of argument.
 * Description: program to print number of argument.
 * passed to it.
 * @argc: number of command line argument.
 * @argv: a pointer to an array of command line arg.
 * Return: 0/nothing.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

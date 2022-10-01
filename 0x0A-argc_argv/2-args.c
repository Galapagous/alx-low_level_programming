#include <stdio.h>

/**
 * main - Program to print its argument.
 * Description: Program to print all argument it recieves.
 * @argc: number of argument passed.
 * @argv: a pointer to the array of argument passed.
 * Return: 0/nothing.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}

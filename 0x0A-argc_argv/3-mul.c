#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two integers.
 * Description:program that accept and multiply two argument.
 * @argc: number of argument passed.
 * @argv: array of character passed.
 * Return: 1 if error was encountered else 0.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}

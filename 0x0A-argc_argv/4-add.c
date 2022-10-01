#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program to add numbers.
 * @argc: number of argument.
 * @argv: pointer to an array of provided arguments.
 * Return: 1 if error, 0 if no argument or sucess.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *ptr = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		sum += strtol(argv[i], &ptr, 10);
		if (*ptr != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - Program entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: 0/nothing
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

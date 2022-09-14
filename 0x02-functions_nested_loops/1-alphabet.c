#include "main.h"

/**
 * main - This is the program entry point.
 * Description: Program to print all alphabets in lower case.
 * Return: 0/Nothing
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}

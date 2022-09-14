#include "main.h"

/**
 * print_alphabet - This is the program entry point.
 * Description: Program to print all alphabets in lower case.
 * Return: 0/Nothing
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_alphabet_x10 - this is the program entry point.
 * Description: program to print alphabet 10 times.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (i = 'a'; i <= 9; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}

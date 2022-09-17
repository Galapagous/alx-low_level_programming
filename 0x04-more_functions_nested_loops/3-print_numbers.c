#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function entry point.
 *Return: 0/nothing is returned.
 */
void print_numbers(void)
{
	for (int i = 0; i <= 10; i++)
	{
		putchar(i + '0');
	}
		putchar('\n');
}

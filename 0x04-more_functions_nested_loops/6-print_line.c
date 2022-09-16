#include <stdio.h>
#include "main.h"

/**
 * print_line - program entry point.
 * @n: number of line to be printed as parametr.
 * Return: 0/nothing.
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}

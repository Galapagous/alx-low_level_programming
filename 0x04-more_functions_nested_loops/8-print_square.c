#include <stdio.h>
#include "main.h"

/**
 * print_square - print # in square for.
 * @size - parameter indicating the width of square.
 * Return: 0/nothing.
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < (size - 1); y++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

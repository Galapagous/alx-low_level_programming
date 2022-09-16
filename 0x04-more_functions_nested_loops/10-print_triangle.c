#include "main.h"

/**
 * print_triangle - print triagle with #.
 * @size : size of the triangle as a parameter.
 * Return: void.
 */

void print_triangle(int size)
{
	int i = 1, j;

	while (i <= size && size > 0)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		j++;
	}
	if (i == 1)
		_putchar('\n');
}

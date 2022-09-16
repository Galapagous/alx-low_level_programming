#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonal line.
 * @i: length of diagonal as parameter.
 * Return: return 0/nothing.
 */

void print_diagonal(int i)
{
	int length, space;

	if (i > 0)
	{
		for (length = 0; length < i; length++)
		{
			for (space = 0; space < length; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (length == (i - 1))
				{
					continue;
				}
					putchar('\n');
				}
		}
					putchar('\n');
	}

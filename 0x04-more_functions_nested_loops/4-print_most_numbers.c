#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - program entry point.
 * Description : program to print from 0 to 9.
 * Return - 0/nothing.
 */
void print_most_numbers(void)
{
	for (int i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar('\n');
	}
}

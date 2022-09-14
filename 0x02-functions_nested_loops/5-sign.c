#include "main.h"
/**
 * print_sign-> program to print sign of a number.
 * @n: number to be check.
 * Description: Program to return the sign of a number.
 * Return: 0, 1 and -1depending on parameter given.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}

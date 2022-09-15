# include "main.h"
/**
 * print_last_digit - fuction that return last digit.
 * @c: parameter whose last digit is returned.
 * Description: Program to print last digit of an integer.
 * Return: the last digit of an integer.
 */
int print_last_digit(int c)
{
	int x;

	if (c < 0)
	{
		c = -(c);
	}
	x = c % 10;

	_putchar(c + '0');
	return (x);
}

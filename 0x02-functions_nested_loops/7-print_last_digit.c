# include "main.h"
/**
 * print_last_digit - fuction that return last digit.
 * @c: parameter whose last digit is returned.
 * Description: Program to print last digit of an integer.
 * Return: the last digit of an integer.
 */
int print_last_digit(int c)
{
	int x = c % 10;

	if (c < 0)
	{
		x = -(x);
	}
	_putchar(x + '0');
	return (x);
}

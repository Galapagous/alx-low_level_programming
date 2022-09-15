# include "main.h"
/**
 * _print_last_digit - fuction that return last digit.
 * @c: parameter whose last digit is returned.
 * Description: Program to print last digit of an integer.
 * Return: the last digit of an integer.
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = -(c);
			_putchar(c % 10 + '0');
	}
	return (c % 10);
}

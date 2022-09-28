#include "main.h"

/**
 * factorial - program to find the factorial of an integer.
 * @n: An integer pass as a parameter.
 * Return: factorial if true or -1 if false.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}

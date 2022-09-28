#include "main.h"

int sqrt_function(int n, int i);

/**
 * _sqrt_recursion - a function to return the square root of number.
 * @n: The number to work on.
 * Return: return the square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_function(n, 0));
}
/**
 * sqrt_function - Mimicking square root of number.
 * using recursion
 * @n: number to find it square root.
 * @i: counter.
 * Return: The squre root of n.
 */

int sqrt_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_function(n, i + 1));
}


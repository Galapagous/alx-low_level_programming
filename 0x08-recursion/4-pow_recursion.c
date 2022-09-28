#include "main.h"

/**
 * _pow_recursion - function to mimick raise to power.
 * @x: The base integer.
 * @y:The exponential integer.
 * Return: The result of X^Y as an int.
 */

int _pow_recursion(int x, int y)
{
	if (x == 1)
		return (1);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}

#include <stdarg.h>

/**
 * sum_them_all - a program that return the sum of all its parameters
 * @n: The number of argument (excluding n iteslf)
 * Return: returns an int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}

#include "main.h"

int prime_number(int n, int i);
/**
 * is_prime_number - prime number checker.
 * @n: An integer to perform check on.
 * Return: return 1 or 0 base on output result.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - A function to check prime number
 * using recursion.
 * @n: The value to perfor check on.
 * @i: A counter factor.
 */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number(n, i - 1));
}

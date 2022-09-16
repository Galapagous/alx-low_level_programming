#include "main.h"

/**
 * _isdigit - program to determine digit.
 * Description : Program return 1 for digit and 0 otherwise.
 * @c :parameter to be check.
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
	{
		return (1);
	}
	return (0);
}

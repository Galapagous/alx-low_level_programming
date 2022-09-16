#include "main.h"
#include <stdio.h>

/**
 * _isupper - function name.
 * @c:  parameter to be check.
 * Description: program to check for upper case.
 * Return: 0 or 1 depending on input.
 */
int _isupper(int c)
{
	if (c > 64 || c < 91)
	{
		return (1);
	}
		return (0);
}

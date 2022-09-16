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
	if (c >= 65 || c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

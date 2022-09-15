#include "main.h"

/**
 * _abs -> program entry point.
 * Description: program to return the absolute value.
 * @c: parameter integer.
 * Return: the absolute value of an integer.
 */

int _abs(int c)
{
	if (c < 0)
	{
	c = -(c);
	}
	return (c);
}

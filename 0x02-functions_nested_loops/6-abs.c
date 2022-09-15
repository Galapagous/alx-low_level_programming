#include "main.h"

/**
 * _abs(int)->program entry point.
 * Description: program to return the absolute value.
 * @c: parameter integer.
 * Return- 0/nothing.
 */

int _abs(int c)
{
	if (c < 0)
	{
	c = -(c);
	}
	return (c);
}

#include "main.h"

/**
 * _strlen_recursion - Program to find length of string.
 * @s: Pointer to string as parameter.
 * Return: Always return length of string as an integer.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (0);
	return (1 + _strlen_recursion(1 + s));
}

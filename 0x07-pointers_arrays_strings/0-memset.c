#include "main.h"

/**
 * _memset - A function to create space.
 * Description - program to create a space on buffer.
 * @s : string to create space on.
 * @b : characteruse as placeholder.
 * @n : number of space to create.
 * Return: return pointer to created space.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= b; i++)
	{
		s[i] = b;
	}
	return (s);
}

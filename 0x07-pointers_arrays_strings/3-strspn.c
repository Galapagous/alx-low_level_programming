#include "main.h"
#include <stdio.h>

/**
 * _strspn - A function to get length of a string.
 * @s: The string parameter to perform search on.
 * @accept: The string to find.
 * Return: Number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int c = 0;

	for (i = 0; s[i] != 0
		; i++)
	{
	if (s[i] == ' ')
		break;
	for (j = 0; accept[j] != 0; j++)
	{
		if (s[i] == accept[j])
			c++;
	}
	}
	return (c);
}

#include "main.h"

/**
 * _strpbrk - Function to search for a matching string.
 * @s: The string to be search.
 * @accept: The string to find.
 * Return: return the pointer to string that match or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				return ((s + i));
			}
		}
	}
	return (NULL);
}

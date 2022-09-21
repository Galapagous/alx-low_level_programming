#include "main.h"
#include <string.h>
/**
 * _strncpy - function to concatenate two strings.
 * @n : size of the destination string.
 * @dest : destination to be concated to.
 * @src : source of file to concat.
 * Return: the destination of the concated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] <= n; i++, len++)
	{
		if (src[i])
		{
			dest[len] = src[i];
		}
		continue;
	}
	dest[len] = '\0';
		return (&*dest);
}


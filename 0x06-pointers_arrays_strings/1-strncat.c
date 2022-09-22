#include "main.h"
#include <string.h>
/**
 * _strncat - function to concatenate two strings.
 * @n : size of the destination string.
 * @dest : destination to be concated to.
 * @src : source of file to concat.
 * Return: the destination of the concated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenDest, i;

	lenDest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenDest + i] = src[i];
	}
	dest[lenDest + i] = '\0';
	return (dest);
}


#include "main.h"
#include <string.h>

/**
 * _strncpy - function to copy certain number of character.
 * Description : function to copy every character from a string.
 * @dest : The destination to copy to.
 * @src : The source to copy from.
 * @n : number of characters to print.
 * Return:A pointer to the destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, lenDest;

	lenDest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (n < lenDest)
			dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _memcpy - copy string.
 * Description : function to copy a certain num of character form src to dest.
 * @dest : destination to be copied to.
 * @src : source ofstring to copy.
 * Return: pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

#include "main.h"
#include <stdio.h>

/**
 * _strcat - program to concatenate two strings.
 * Description : program the accept two string pointers and concat
 * @src : source of string.
 * @dest : destination of final string.
 * Return:Pointer to the concat destination.
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
return (&*dest);
}

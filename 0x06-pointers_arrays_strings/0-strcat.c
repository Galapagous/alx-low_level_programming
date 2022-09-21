#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - program to concatenate two strings.
 * Description : program the accept two string pointers and concat
 * @src : source of string.
 * @dest : destination of final string.
 * Return:Pointer to the concat destination.
 */

char *_strcat(char *dest, char *src)
{
	int s_len = strlen(src);
	int d_len = strlen(dest);
	int i = 0;

	for (i = 0; i <= d_len; i++)
	{
		dest[d_len + i] = src[i];
	}
return (&*dest);
}

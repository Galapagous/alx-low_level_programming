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
	int s_len = 0;
	int d_len = 0;
	int i = 0;

	while (src[s_len])
	{
		s_len++;
	}
	while (src[d_len])
	{
		d_len++;
	}
	for (i = 0; i <= d_len; i++)
	{
		dest[d_len + i] = src[i];
	}
return (&*dest);
}

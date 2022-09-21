#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int s_len = strlen(src);
	int d_len = strlen(dest);
	int i = 0;
	for (i = 0; i <= d_len; i++)
	{
		dest[d_len + i} = src[i];
	}
return (&*dest);
}

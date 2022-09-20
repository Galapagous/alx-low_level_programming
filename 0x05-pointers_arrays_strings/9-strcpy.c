#include "main.h"
/**
 * _strcpy - function to copy from source to dest.
 * @src : souce of file.
 * @dest : destination of file.
 * Return: return destination to user/function caller.
 **/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

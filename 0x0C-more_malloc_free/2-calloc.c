#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initialize it to zero
 * @nmemb: number of element in the array
 * @size: of the array
 * Return: return a pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, c;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = nmemb * size;

	ptr = malloc(c);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		ptr[i] = 0;

	return ((void *) ptr);
}

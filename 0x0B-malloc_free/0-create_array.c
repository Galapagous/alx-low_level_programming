#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that create aray of character and initialize
 * it with a char.
 * @size: The size of the array
 * @c: The character to create the array from.
 * Return: the to the array, null if size is zero
 * or if malloc fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

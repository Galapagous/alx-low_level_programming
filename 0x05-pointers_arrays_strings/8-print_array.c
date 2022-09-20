#include "main.h"
#include <stdio.h>

/**
 * print_array - print certain numbers of array.
 * Description : function to print a certain number of arrays.
 * @a : array to work with/on.
 * @n : number of elements to print.
 * @i - looping factor.
 **/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}

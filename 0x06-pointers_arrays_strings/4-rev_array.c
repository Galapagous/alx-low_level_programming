#include "main.h"
#include <string.h>

/**
 * reverse_array - function to reverse array.
 * @a: pointer to array.
 * @n: number of arrays
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}

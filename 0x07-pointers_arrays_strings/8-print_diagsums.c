#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function to print sum of
 * Two diagonals of a square matrix.
 * @a: pointer to the array.
 * @size: size of the array.
 * Return: 0/nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int n = 0, m = 0, p = 1;
	long int dia1 = 0;
	long int dia2 = 0;

	for (i = 0; i < size; i++)
	{
		dia1 += a[(size * m) + m];
		m++;
	}
	for (i = 0; i < size; i++)
	{
		dia2 += a[(size * n) + (size - p)];
		n++;
		p++;
	}
	printf("%ld, %ld\n", dia1, dia2);
}

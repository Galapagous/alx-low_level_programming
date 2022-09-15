#include <stdio.h>
/**
 * main - program entry point.
 * Description: print first 50 fibonacci num starting with 1 & 2.
 * Return: 0/nothing.
 */
int main(void)
{
	int x = 0;
	long j = 1, k = 2;

	while (x == 0)
	{
		if (x == 0)
			printf("%ld", j);
		else if (x == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		x++;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 * main - program entry point.
 * Description: print first 50 fibonacci num starting with 1 & 2.
 * Return: 0/nothing.
 */
int main(void)
{
	int x = 0, y = 1, z = 0;
	int total = 0;

	while (z < 4000000)
	{
		z = x + y;
		y = z;
		if (z % 2 == 0)
		{
			total += z;
		}
	}
	printf("%i\n", total);
	return (0);
}

#include <stdio.h>
/**
 * main - print the sum of all mltiples of 3 or 5 up to 102
 * Return: true.
 */
int main(void)

{
	int i, x = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x += i;
		}
		i++;
	}
	printf("%d\n", x);
	return (0);
}

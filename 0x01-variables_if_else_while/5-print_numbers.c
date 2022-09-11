#include <stdio.h>

#include <unistd.h>

/**
 * main - Program entry point
 * Description: prints all numbers from 0 to 9
 *  from base 10 from 0
 * Return: 0/nothing
 **/

int main(void)

{
	int n;

	for (n = 0; n < 10; n++)
{
	printf("%d", n);
}
	putchar('\n');
return (0);

}

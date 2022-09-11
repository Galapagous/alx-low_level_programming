#include <stdio.h>
#include <unistd.h>
/**
 * main - Program entry point
 * Description: prints char below 10
 * Return: 0/nothing
 */

int main(void)

{

int a;

	for (a = 0; a < 10; a++)
{
	putchar(a + '0');
}
	putchar('\n');
return (0);
}

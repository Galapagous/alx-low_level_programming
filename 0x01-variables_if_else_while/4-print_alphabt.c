#include <stdio.h>
#include <unistd.h>
/**
 * main - Program entry point.
 * Description: prints lowercase alphabets except q and e.
 * Return: 0/nothing.
 */

int main(void)

{

int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
{
	putchar(ch);															}

	else
	{
	}
}
	putchar('\n');
	return (0);
}

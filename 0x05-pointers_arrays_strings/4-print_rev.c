#include "main.h"
#include <string.h>

/**
 * print_rev - function to print rev character.
 * Description : function to reverse a string of text.
 * @s: string parameterto be reverse.
 * @j - length of string.
 * @k - word counter in reverse.
 **/

void print_rev(char *s)
{
	int j, k;

	j = strlen(s);
	for (k = j - 1; k >= 0; k++)
	{
		_putchar(s[k]);
	}
}

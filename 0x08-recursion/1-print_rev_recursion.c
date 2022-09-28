#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - To print string in reverse.
 * Description - Function that use non tail recursion to print.
 * string of text in reverse.
 * @s : A pointer to string parameter to reverse.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string.
 * Description : function accept a string and print half of it.
 * @str : string parameter.
 * @i - integerfor looping.
 * @len - length of the string.
 * @half - half of the string.
 **/

void puts_half(char *str)
{
	int i, len, half;

	len = strlen(str);
	half = len / 2;
	if (len % 2 != 0)
	{
		half = half + 1;
	}
	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

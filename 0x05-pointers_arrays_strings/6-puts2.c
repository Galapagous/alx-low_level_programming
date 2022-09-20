#include "main.h"
#include <string.h>
/**
 * puts2 - function that print everyother character.
 * Description : function takes a string and print every second charactr.
 * @str : string parameter.
 * @i - nan iterator for looping through array.
 **/

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

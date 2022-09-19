#include "main.h"
/**
 * _puts - print a string of character.
 * Description : function to print using put.
 * @s : string parameter to print.
 **/
void _puts(char *s)
{
	for (; *s != '\0'; *s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

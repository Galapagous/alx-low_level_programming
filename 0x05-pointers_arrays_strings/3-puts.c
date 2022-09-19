#include "main.h"
/**
 * _puts - print a string of character.
 * Description : function to print using put.
 * @str : string parameter to print.
 **/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

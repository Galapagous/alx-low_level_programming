#include "main.h"
#include <string.h>
/**
 * rev_string - function to reverse a string.
 * Description : function take a sting and reverse it.
 * @s : string parameter to be reverse.
 **/
void rev_string(char *s)
{
	int len = strlen(s);
	char ch;
	int i;

	for (i = 0; i <= (len / 2); i++)
	{
		ch = s[i];

		s[i] = s[len - i - 1];

		s[len - i - 1] = ch;
	}
}

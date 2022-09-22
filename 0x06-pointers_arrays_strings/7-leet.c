#include "main.h"
#include <string.h>

/**
 * leet - encode a string 1337.
 * @s: The string to be encoded.
 *
 * Return: The encoded version of string.
 */

char *leet(char *s)
{
	int i, j, len;
	int lett[5] = {97, 101, 111, 116, 108};
	char num[5] = {'4', '3', '0', '7', '1'};

	len = strlen(s);

	for (i = 0; i < len && s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lett[j] || s[i] == lett[j] - 32)
				s[i] = num[j];
		}
	}
	return (s);
}

#include "main.h"
#include <stdio.h>

/**
 * *cap_string - function to mimick to uppercase.
 * @s: pointer parameter for strng.
 *
 * Return: *s.
 */

char *cap_string(char *s)
{
	int i, j;
	char separator[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		for (j = 0; separator[j] != '\0';
				{
				if (s[i] == separator[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
				{
				s[i = 1] = s[i + 1] - 32;
				}
				}
	}
	return (s);
}

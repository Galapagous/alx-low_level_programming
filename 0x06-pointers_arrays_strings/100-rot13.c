#include "main.h"

/**
 * rot13 - rot13 encoder.
 * Description - Program to encrypt strng using rot13 method.
 * @s: string parameter.
 * Return: pointer to encryption.
*/

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			(s[i] + 13 <= 90) ? s[i] = s[i] + 13 : (s[i] = s[i] - 13);
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			(s[i] + 13 <= 122 ? s[i] = s[i] + 13 : (s[i] = s[i] - 13));
		}
	}
	return (s);
}

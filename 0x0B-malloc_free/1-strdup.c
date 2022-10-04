#include "main.h"
#include <stdlib.h>

/**
 * _strdup - functiothat copies a string.
 * @str: string to be copied.
 * Return: return pointer to a newly allocated space
 * which contains a copy of the string.
 */

char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *newStr;

	if (str == NULL)
		return (NULL);
	for (i = 0; ; i++)
	{
		c++;
		if (str[i] == '\0')
			break;
	}

	newStr = (char *) malloc(c * sizeof(char));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		newStr[i] = str[i];
	}
	return (newStr);
}

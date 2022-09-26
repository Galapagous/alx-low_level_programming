#include "main.h"

/**
 * _strchr - function to find the occurance of a string.
 * @s : string of text to search into.
 * @c : character to search for.
 * Return: pointer to the search index or NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (s[i] == c)
			return ((s + i));
		if (s[i] == 0)
			break;
	}
	return (NULL);
}

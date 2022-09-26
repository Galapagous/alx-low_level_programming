#include "main.h"

/**
 * _strchr - function to find the occurance of a string.
 * @s : string of text to search into.
 * @c : character to search for.
 * Return: pointer to the search index or NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == '\0')
		return (NULL);
}

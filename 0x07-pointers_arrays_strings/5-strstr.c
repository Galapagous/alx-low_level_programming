#include "main.h"

/**
 * _strstr - a function that find another string.
 * @haystack: The string to test.
 * @needle: The string to be search.
 * Return: return pointer to substring in main string
 * or Null if no string was found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k;

	for (i = 0; haystack[i] != 0; i++)
	{
		k = i;
		j = 0;
		for (; needle[j] != 0;)
		{
			if (haystack[k++] == needle[j++])
			{
				continue;
			}
			break;
		}
		if (needle[j] == '\0')
			return ((haystack + 1));
	}
	return (NULL);
}

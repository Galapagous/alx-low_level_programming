#include "main.h"
#include <stdlib.h>

int count_str1(char *s1);
int count_str2(char *s2);

/**
 * str_concat - function that concatenate two string.
 * @s1: The destination string.
 * @s2: The string to be added to s1.
 * Return: return pointer to a newly allocated space
 * with content s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0, c = 0, c1 = 0, c2 = 0;
	char *newStr;

	c1 = count_str1(s1);
	c2 = count_str2(s2);
	c = c1 + c2 + 1;
	newStr = (char *) malloc(c * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		for (i = 0; i < c1; i++)
		{
			newStr[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for ( ; i < c; i++)
		{
			newStr[i] = s2[j];
			j++;
		}
	}
	newStr[c - 1] = '\0';
	return (newStr);
}

/**
 * count_str1 - counts the number of character in s1
 * @s1: The string to be counter
 * Return: return the number of int, return 0 if s1 is null.
 */

int count_str1(char *s1)
{
	int i;
	int c1 = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			c1++;
		}
	}
	return (c1);
}

/**
 * count_str2 - couns the number of character in s2.
 * @s2: the string to be counted.
 * Return: number of chracter in an int, return zero if s2 is null.
 */

int count_str2(char *s2)
{
	int i;
	int c2 = 0;

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			c2++;
		}
	}
	return (c2);
}

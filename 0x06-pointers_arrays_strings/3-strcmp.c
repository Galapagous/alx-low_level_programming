#include "main.h"

/**
 * _strcmp - function to compare strings.
 * Description : function take two string parameters and compare them.
 * @s1 : first string parameter location.
 * @s2 : second string parameter location.
 * Return: *destination ofconcat string.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}

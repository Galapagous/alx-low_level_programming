#include "main.h"
#include <string.h>

/**
 * string_toupper -Lowercase to uppercase.
 * @stri: Sting to change
 *
 * Return: The change string.
 */

char *string_toupper(char *stri)
{
	int i, lengh;

	lengh = strlen(stri);

	for (i = 0 ; i < lengh && stri[i] != '\0'; i++)
	{
		if (stri[i] > 96 && stri[i] < 123)
			stri[i] -= 32;
	}
	return (stri);
}

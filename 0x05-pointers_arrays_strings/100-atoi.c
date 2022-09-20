#include "main.h"

/**
 * _atoi - function that convert string to integer.
 * @s: pointer parameter.
 * Return: 0/nothing.
 **/

int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *holder;

	holder = s;
	num = 0;
	sign = 1;
	while (*holder != '\0' && (*holder < '0' || *holder > '9'))
	{
		if (*holder == '-')
			sign *= -1;
		holder++;
	}
	if (*holder != '\0')
	{
		do {
			num = num * 10 + (*holder - '0');
			holder++;
		} while (*holder >= '0' && *holder <= '9');
	}
	return (num * sign);
}

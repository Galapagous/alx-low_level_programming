#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print minimum number of coin.
 * @argv: pointer to array of string parameters.
 * @argc: number of argument given.
 * Return: 0 on success or 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int cents;
	int quaters_25, dimes_10, nickles_5, coin_2, pennies_1;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	quaters_25 = cents / 25;
	cents = cents - (quaters_25 * 25);

	dimes_10 = cents / 10;
	cents = cents - (dimes_10 * 10);

	nickles_5 = cents / 5;
	cents = cents - (dimes_10 * 10);

	coin_2 = cents / 2;
	cents = cents - (coin_2 * 2);

	pennies_1 = cents / 1;

	change = quaters_25 + dimes_10 + nickles_5 + coin_2 + pennies_1;
	printf("%d\n", change);
	return (0);
}

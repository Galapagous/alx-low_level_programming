#include "main.h"

/**
 * _islower-> Program entry point.
 * @c: parameter to be check.
 * Description: Program to return lower case character.
 * Return: 1 if character is lower case else return 0.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

#include "main.h"

/**
 * _isalpha-> Program entry point.
 * @c: parameter to be check.
 * Description: Program to return upper case character.
 * Return: 1 if character is upper case else return 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

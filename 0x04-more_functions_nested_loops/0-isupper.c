#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 *Return: return 1 if c is uppercase,otherwise return 0.
 *@c: is the character being checked.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

#include "main.h"

/**
 * _isupper - Function that checks for uppercase character.
 * @c : character input.
 * Return:  1 if uppercase or 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
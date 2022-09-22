#include "main.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9).
 * @c : number input
 * Return: 1 is c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}

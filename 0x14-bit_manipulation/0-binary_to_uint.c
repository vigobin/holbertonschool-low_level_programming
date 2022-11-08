#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 *  there is one or more chars in the string b that is not 0 or 1
 *  b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int length, number = 0, power = 1;

	if (!b)
		return (0);
	length = strlen(b);

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		number += (b[length] - '0') * power;
		power *= 2;
	}
	return (number);
}

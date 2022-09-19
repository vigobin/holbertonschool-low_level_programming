#include "main.h"

/**
 * main - Function that checks for lowercase character.
 * Return: 00
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		_putchar(1);
	else
		_putchar(0);

	return (0);
}

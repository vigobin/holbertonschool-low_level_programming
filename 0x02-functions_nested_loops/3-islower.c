#include "main.h"

/**
 * main - Function that checks for lowercase character.
 * Return: 00
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

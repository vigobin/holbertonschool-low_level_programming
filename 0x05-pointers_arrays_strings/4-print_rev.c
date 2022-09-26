#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @s : char input.
 * Return: 0
 */

void print_rev(char *s)
{
	int count, count2, length;

	for (count = 0; s[count] != '0'; count++)
	{
	}
	length = count;
	for(count2 = length - 1; count2 >= 0; count2--)
	{
		_putchar(s[count2]);
	}
	_putchar('\n');
}

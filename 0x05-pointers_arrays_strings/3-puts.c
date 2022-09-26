#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str : string input.
 * Return: 0
 */

void _puts(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}

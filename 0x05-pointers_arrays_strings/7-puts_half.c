#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * @str : string input.
 * Return: print string.
 */

void puts_half(char *str)
{
	int count, length, n;

	while (str[length] != '\0')
		length++;
	n = length / 2;
	if (length % 2 != 0)
	{
		n = (length + 1) / 2;
	}
	for (count = n; str[count] != '\0'; count++)
		_putchar(str[count]);
	_putchar('\n');
}

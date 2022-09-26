#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character.
 * @str : input string.
 * Return: print characters.
 */

void puts2(char *str)
{
	int length;

	for (length = 0; str[length] <= '\0'; length++)
	{
		if (length % 2 == 0)
			_putchar(str[length]);
	}
	_putchar('\n');
}

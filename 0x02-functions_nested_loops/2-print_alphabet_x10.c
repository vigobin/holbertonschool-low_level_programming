#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet.
 * Return: a to z.
 */

void print_alphabet_x10(void)
{
	int count;

	for (count = 0 ; count < 10 ; count++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * main - Function that prints 10 times the alphabet.
 * Return: 0
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
	}
	_putchar('\n');
}

#include "main.h"

/**
 * main - unction that prints the alphabet, in lowercase.
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}

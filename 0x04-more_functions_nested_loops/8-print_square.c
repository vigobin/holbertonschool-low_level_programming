#include "main.h"

/**
 * print_square - Function that prints a square.
 * @size : size input.
 * Return: display square.
 */

void print_square(int size)
{
	int i,j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			for (j = 1; j < size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 * @n : input integer. 
 * Return: number of times the character _ should be printed.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('-');
	}
	_putchar('\n');
	
}

#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n : number of time to print.
 * Return: print \.
 */

void print_diagonal(int n)
{
	int diag, space;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	
	}
	_putchar('\n');
}

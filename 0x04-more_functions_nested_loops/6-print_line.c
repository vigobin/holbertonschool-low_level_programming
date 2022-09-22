#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 * @n : input integer. 
 * Return: number of times the character _ should be printed.
 */

void print_line(int n)
{
	while (n++)
		_putchar('-');
}

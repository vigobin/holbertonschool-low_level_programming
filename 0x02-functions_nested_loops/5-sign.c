#include "main.h"

/**
 * main -function that prints the sign of a number.
 * Return: 0
 */

int print_sign(int n)
{
	if ( n > 0 )
		return (1);
		_putchar('+');
	else if ( n == 0 )
		return (0);
		_putchar('0');
	else if ( n < 0 )
		return (-1);
		_putchar('-');

}

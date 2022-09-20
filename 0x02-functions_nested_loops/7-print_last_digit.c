#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 * @n : integer input.
 * Return: 0
 */

int print_last_digit(int n)
{
	int remainder;

	remainder = (n % 10);
	if (remainder < 0)
	{
		remainder = (-1 * remainder);
	}
	_putchar(remainder + '0');

	return (remainder);
}

#include "main.h"

/**
 * main - Function that prints the last digit of a number.
 * Return: 0
 */

int print_last_digit(int n)
{
	int remainder;
	remainder = (n % 10);
	_putchar(remainder + '0');

	return (remainder);
}

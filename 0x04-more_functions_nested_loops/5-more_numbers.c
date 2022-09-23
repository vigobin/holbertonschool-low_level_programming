#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14.
 * Return: print number.
 */

void more_numbers(void)
{
	int count, number;

	for (count = 0; count < 10; count++)
	{
		for (number = 0; number <= 14; number++)
		{

			_putchar(number % 10 + '0');
			_putchar(number / 10 + '0');
		}
		_putchar('\n');
	}

}

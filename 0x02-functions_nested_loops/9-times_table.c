#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Return: 0
 */

void times_table(void)
{
	int num1;
	int num2;
	int mult;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (num2 = 1; num2 <= 9; num2++)
		{
			mult = (num1 * num2);
			if ((mult / 10) > 0)
			{
				_putchar((mult / 10)  + '0');
			}
			else 
			{
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}

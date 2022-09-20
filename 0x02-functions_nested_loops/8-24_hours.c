#include "main.h"

/**
 * main - function that prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 * Return: 0
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + h);
			_putchar(':');
			_putchar('0' + m);
			_putchar('\n');
		}
	}

}


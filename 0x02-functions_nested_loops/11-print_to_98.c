#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers from n to 98.
 * @n : number to count from.
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}

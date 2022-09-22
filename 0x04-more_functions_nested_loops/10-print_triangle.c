#include "main.h"

/**
 * print_triangle - Function that prints a triangle.
 * @size : input size of triangle.
 * Return: print triangle.
 */

void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
		}
	}
}

#include "main.h"

/**
 * print_triangle - Function that prints a triangle.
 * @size : input size of triangle.
 * Return: print triangle.
 */

void print_triangle(int size)
{
	int count, count2;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (count = 1; count <= size; count++)
		{
			for (count2 = size - count; count2 > 0; count2--)
				_putchar(' ');
			for (count2 = 0; count2 < count; count++)
				_putchar('#');
			_putchar('\n');
		}
}

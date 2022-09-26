#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 * @a : first integer.
 * @b : second integer.
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

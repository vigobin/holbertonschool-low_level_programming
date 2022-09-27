#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers.
 * @a : integer array input.
 * @n : number of elements.
 * Return: print elements.
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count == 0)
			printf("%d", a[count]);
		else
			printf(", %d", a[count]);
	printf("\n");
}

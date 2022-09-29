#include "main.h"

/**
 *reverse_array - Function that reverses the content of an array of integers.
 *@a: array of integers.
 *@n: numner of elements to swap.
 */

void reverse_array(int *a, int n)
{
	int count, temp;

	for (count = 0; count < n; count++)
	{
		n--;
		temp = a[count];
		a[count] = a[n];
		a[n] = temp;
	}
}

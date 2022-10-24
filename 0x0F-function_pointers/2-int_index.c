#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index - function that searches for an integer.
 *@array: function for array.
 *@size: number of elements in the array.
 *@cmp: This is the pointer to function to compare values.
 *Return: the index of the first element for which the
 *cmp function does not return 0.
 *If no element matches, return -1.
 *If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

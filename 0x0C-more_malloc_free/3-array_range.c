#include <stdlib.h>
#include "main.h"

/**
 *array_range - function that creates an array of integers.
 *@min: minimum value for array.
 *@max: maximum value to include.
 *Return: pointer to newly created array
 * if min > max, if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *alloc, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	alloc = malloc(size * sizeof(int));
	if (alloc == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		alloc[i] = min;
		min++;
	}
	return (alloc);
}

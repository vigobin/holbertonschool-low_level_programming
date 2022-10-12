#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - function that returns a pointer to a
 *2 dimensional array of integers.
 *@width: width dimension of array.
 *@height: height dimension of array.
 *Return: pointer to array, NULL for any error.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);

		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}

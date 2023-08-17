#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array
 *  of integers using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size:  number of elements in array.
 * @value: value to search for.
 * Return: the index where value is located,
 *  -1 If value is not present in array or if array is NULL.
*/

int binary_search(int *array, size_t size, int value)
{
	int left, right, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d, ", array[i]);

		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

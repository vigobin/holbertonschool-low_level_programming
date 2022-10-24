#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - function that executes a function given
 *as a parameter on each element of an array.
 *@array: function for array.
 *@size: size of array.
 *@action: This is the pointer to function.
 *Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

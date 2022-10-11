#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_array -  function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: size of the array.
 *@c: char to be initialized.
 *Return: A pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int s;

	a = malloc(size * sizeof(char));

	if (size == 0 || a == NULL )
		return (NULL);
	for (s = 0; s < size; s++)
		a[s] = c;

	return (a);
}

#include <stdlib.h>
#include "main.h"

/**
 *_calloc - Function that allocates memory for an array, using malloc.
 *@nmemb: number of elements in array.
 *@size: size of each byte.
 *Return: pointer to allocated memory or NULL for failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	a = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return (a);
}

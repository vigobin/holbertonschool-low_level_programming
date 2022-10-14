#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: size input.
 *Return: pointer to allocated memory or exit with 98 if NULL.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

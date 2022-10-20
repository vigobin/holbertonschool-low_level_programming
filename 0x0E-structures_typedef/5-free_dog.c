#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - Function that frees dogs.
 *@d: input struct to free.
 *Return: always
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

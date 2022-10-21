#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - Function that creates a new dog.
 *@name: name input.
 *@age: age input.
 *@owner: owner name input.
 *Return: NULL for failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct new_dog;

	if (new_dog != NULL)
	{
		new_dog = name;
		new_dog = age;
		new_dog = owner;
	}
	if (new_dog == NULL)
		return (NULL);
}

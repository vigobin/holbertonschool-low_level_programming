#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog -  function that initializes a variable of type struct dog.
 *@d: variable name for struct dog.
 *@name: name of dog.
 *@age: age input.
 *@owner: owner name input.
 *Return: 0 always.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

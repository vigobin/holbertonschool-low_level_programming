#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - function that prints a struct dog.
 *@d: struct to be printed.
 *Return: Nil.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age < 0)
		printf("(nil)\n");
	if (d->owner == NULL)
		printf("(nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
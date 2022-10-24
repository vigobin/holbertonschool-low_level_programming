#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - function that prints a name.
 *@name: name input.
 *@f: argument for pointer to function.
 *Return: exit if NULL is passed.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

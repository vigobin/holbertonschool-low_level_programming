#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - function that prints a name.
 *@name: name input.
 *@f: argument for pointer to function.
 *Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

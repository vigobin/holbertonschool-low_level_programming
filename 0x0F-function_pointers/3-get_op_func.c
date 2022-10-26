#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *get_op_func - function that selects the correct function to perform
 *the operation asked by the user.
 *@s: operator passed as argument to the program.
 *Return: NULL for no match.
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t opsel[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (opsel[i].op)
	{
		if (*(opsel[i].op) == *s)
			return (opsel[i].f);
		i++;
	}
	return (NULL);
}

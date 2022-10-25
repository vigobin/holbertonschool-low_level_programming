#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *main - program that performs simple operations.
 *@argc: number of arguments.
 *@argv: string array.
 *Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (!get_op_func(operator))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}

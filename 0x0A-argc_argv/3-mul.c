#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that multiplies two numbers and prints the result.
 *@argc: number of arguments passed to the program
 *@argv: numbers to be multiplied.
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b =  atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - program that adds positive numbers.
 *@argc: number of arguments passed to the program.
 *@argv: numbers to be added.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, add;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}

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
	int i, num, add;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num = atoi(argv[i]);
			add += num;
		}
	}
	printf("%d\n", add);
	return (0);
}

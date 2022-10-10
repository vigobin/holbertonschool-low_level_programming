#include <stdio.h>

/**
 *main - program that prints its name, followed by a new line.
 *@argc: number of arguments passed to the program.
 *@argv: string array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}

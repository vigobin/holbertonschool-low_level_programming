#include <stdio.h>

/**
 * main -  program that prints the name of the file it was compiled from.
 */

int main(void)
{
	printf("%s\n", __FILE__);
}

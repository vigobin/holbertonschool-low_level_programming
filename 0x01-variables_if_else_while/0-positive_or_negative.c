#include <stdlib.h>
#include <time.h>
/**
 * main - Assign a random number to the variable n each time it is executed.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n");
	else if (n == 0)
	printf("%d is zero\n");
	else
	printf("%d is negative\n");
	return (0);
}

#include "main.h"

int sqrt_calc(int n, int i);

/**
 *_sqrt_recursion - Function that returns the natural square root of a number.
 *@n: number input.
 *Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_calc(n, 0));
}

/**
 *sqrt_calc - recursion to find square root.
 *@n: number to calculate.
 *@i: iteration.
 *Return: square root.
 */

int sqrt_calc(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (sqrt_calc(n, i + 1));
}

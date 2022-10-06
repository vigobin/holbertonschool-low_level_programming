#include "main.h"

/**
 *_pow_recursion - Returns the value of x raised to the power of y.
 *@x: integer input.
 *@y: calculate to this power of x.
 *Return: x to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);

	return (x * _pow_recursion(x, y - 1));
}

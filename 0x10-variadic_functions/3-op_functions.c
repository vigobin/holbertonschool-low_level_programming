#include "3-calc.h"

/**
 *op_add - returns the sum of a and b.
 *@a: first number.
 *@b: second number to be added to a.
 *Return: sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - returns the difference of a and b.
 *@a: first number.
 *@b: second number to be subracted from a.
 *Return: subtraction.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - returns the product of a and b.
 *@a: first number.
 *@b: second number to be multiplied.
 *Return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - returns the result of the division of a by b.
 *@a: first number.
 *@b: second number to divide.
 *Return: division.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - returns the remainder of the division of a by b.
 *@a: first number.
 *@b: second number.
 *Return: remainder.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

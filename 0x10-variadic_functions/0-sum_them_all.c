#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - Function that returns the sum of all its parameters.
 *@n: number input.
 *Return: 0 if n equals 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

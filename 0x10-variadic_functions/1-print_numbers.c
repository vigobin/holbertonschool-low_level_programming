#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - Function that prints numbers, followed by a new line.
 *@separator: string to be printed between numbers.
 *@n: number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else if (i == 0)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	}
	printf("\n");

	va_end(ap);
}

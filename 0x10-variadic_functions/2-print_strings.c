#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - Function that prints strings, followed by a new line.
 *@separator: string to be printed between strings.
 *@n: number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ap);
}

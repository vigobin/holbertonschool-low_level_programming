#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup - function that returns a pointer to a
 *newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: input string
 *Return: d for duplicate string or Null if insufficient
 *memory was available.
 */

char *_strdup(char *str)
{
	char *d;
	int len, i;

	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	len += 1;
	d = (char *) malloc(len * sizeof(char));

	if (d == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		d[i] = str[i];

	return (d);
}

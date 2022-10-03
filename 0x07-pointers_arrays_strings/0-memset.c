#include "main.h"

/**
 *_memset - Function that fills memory with a constant byte.
 *@s: memory variable.
 *@b: constant byte.
 *@n: first n bytes to be filled.
 *Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

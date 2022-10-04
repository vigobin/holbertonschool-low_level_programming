#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - Function that searches a string for any of a set of bytes.
 *@s: input string.
 *@accept: string to check for the match.
 *Return: a pointer to the byte in s that matches one of the bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}

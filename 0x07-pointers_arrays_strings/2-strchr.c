#include <stdio.h>
#include "main.h"

/**
 *_strchr - function that locates a character in a string.
 *@c: character to be located.
 *@s: string input.
 *Return: c for the first occurence.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		i++;
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

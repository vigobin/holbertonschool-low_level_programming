#include "main.h"

/**
 *_strspn - Function that gets the length of a prefix substring.
 *@s: input string.
 *@accept: number of bytes of segment.
 *Return: number of byes in segment from s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, match;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		match = 0;
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				match = 1;
				count++;
				break;
			}

		}
		if (match == 0)
			return (count);
	}
	return (count);
}

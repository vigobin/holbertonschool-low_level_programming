#include "main.h"
#include <stdio.h>

/**
 *_strstr - Function that locates a substring.
 *@haystack: input string.
 *@needle: substring to locate first occurence..
 *Return: A pointer to the beginning of the located substring,
 *or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}

#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - function that concatenates two strings.
 *The returned pointer shall point to a newly allocated space in memory,
 *which contains s1, followed by the first n bytes of s2.
 *@s1: first string input
 *@s2: second string input.
 *@n: size of bytes to take from s2.
 *Return: ptr pointer to concatenated string or NULL for failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *dummy;
	unsigned int i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = 0;
	while (s1[len])
		len++;

	ptr = malloc(sizeof(s1) * (len + 1));
	dummy = malloc(5);

	if (ptr == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		ptr[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		ptr[len++] = s2[i];

	ptr[len] = '\0';

	return (ptr);
}

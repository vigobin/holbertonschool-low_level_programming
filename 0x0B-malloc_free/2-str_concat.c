#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 **str_concat - function that concatenates two strings.
 *@s1: first string input.
 *@s2: second string.
 *Return: pointer to new allocated memory containing both strings
 *NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, len, len1, len2;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;
	len2 = 0;
	while (s2[len2])
		len2++;

	len = len1 + len2 + 1;
	p = malloc(len * sizeof(char));
	
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p[i] = s1[i];
	for (i = 0; s2[i]; i++)
		p[i] = s2[i];

	return (p);
}

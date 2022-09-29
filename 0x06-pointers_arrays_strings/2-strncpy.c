#include "main.h"

/**
 *_strncpy - function that copies a string.
 *@dest: variable for the copy.
 *@src: string input.
 *@n: length of string.
 *Return: pointer to copy.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @src : String input.
 * @dest : Second string, append src string to this.
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int count, count2;

	count = 0;
	while (dest[count])
		count++;	
	count2 = 0;
	while (src[count2])
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}

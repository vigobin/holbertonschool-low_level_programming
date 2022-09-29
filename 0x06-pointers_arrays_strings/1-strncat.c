#include "main.h"

/**
*_strncat - function that concatenates two strings.
*@dest : first string and append to this.
*@src : second string.
*@n: maximum bytes for src.
*Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int count, count2;

	count = 0;
	while (dest[count])
		count++;
	count2 = 0;
	while (src[count2] && n > count2)
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';

	return (dest);
}

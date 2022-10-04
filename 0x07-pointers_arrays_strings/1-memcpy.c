#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *@dest: memory area to copy to.
 *@src: copy from memory area.
 *@n: number of bytes to copy.
 *Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *srcChar = (char *)src;
	char *destChar = (char *)dest;

	for (i = 0; i < n; i++)
	{
		destChar[i] = srcChar[i];
	}
	return (dest);
}

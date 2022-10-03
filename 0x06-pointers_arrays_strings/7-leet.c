#include "main.h"

/**
 *leet - function that encodes a string into 1337.
 *@str: input str.
 *Return: updated string.
 */

char *leet(char *str)
{
	int count, count2;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (count = 0; str[count]; count++)
	{
		for (count2 = 0, count2 < 10; count2++)
		{
			if (str[count] == a[count2])
			{
				str[count] = b[count2];
			}
		}
	}
	return (str);
}

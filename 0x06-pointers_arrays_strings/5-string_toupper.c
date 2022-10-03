#include "main.h"

/**
 *string_toupper - function that changes all lowercase letters of a string
 *to uppercase.
 *@str: input string.
 *Return: str for uppercase.
 */

char *string_toupper(char *str)
{
	int count = 0;

	while (str[count])
	{
		count++;
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] = str[count] - 32;
	}
	return (str);
}

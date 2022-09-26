#include "main.h"

/**
 *  rev_string - function that reverses a string.
 * @s : input string.
 * Return: 0
 */

void rev_string(char *s)
{
	int i, count, length;
	char output;

	while (i[s] != '\0')
		i++;
	length = i - 1;
	for (count = 0; count < length / 2; count++)
	{
		output = s[count];
		s[count] = s[length];
		s[length] = output;
		length--;
	}
}

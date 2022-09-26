#include "main.h"

/**
 *  rev_string - function that reverses a string.
 * @s : input string.
 * Return: 0
 */

void rev_string(char *s)
{
	int length = 0;
	int count;
	char output = s[0];

	while (s[length] != '\0')
		length++;
	for (count = 0; count < length; count++)
	{
		output = s[count];
		s[count] = s[length];
		s[length] = output;
		length--;
	}
}

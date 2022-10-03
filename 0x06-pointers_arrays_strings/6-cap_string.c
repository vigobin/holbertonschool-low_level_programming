#include "main.h"

/**
 *cap_string - function that capitalizes all words of a string.
 *@str: string input.
 *Return: str for capitalization.
 */

char *cap_string(char *str)
{
	int count, count2 = 0;
	char sep;

	sep[13] = ('_', '\t', '\n', ',', ';', '.'; '!', '?', '"'; '(', ')', '{', '}');

	while (str[count])
	{
		if (count == 0 && str[count] >= 'a' && str[count] <= 'z')
			str[count] = str[count] - 32;
		for (count2 = 0; count2 < 13; count2++)
		{
			if (str[count] == sep[count2])
			{
				if (str[count + 1] >= 'a' && str[count + a] <= 'z')
					str[count + 1] = str[count + 1] - 32;
			}
		}
		count++;
	}
	return (str);

}

#include "main.h"
/**
 * cap_string - capitalize words
 * @str: parameter
 * Return: capitalized words
 */
char *cap_string(char *str)
{
	int x, y;
	int alph = 32;
	int sep[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - alph;
		}

		alph = 0;

		for (y = 0; y <= 12; y++)
		{
			if (str[x] == sep[y])
			{
				y = 12;
				alph = 32;
			}
		}
	}
	return (str);
}

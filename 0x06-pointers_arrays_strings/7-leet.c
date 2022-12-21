#include "main.h"
/**
 * leet - encode a string
 * @str: parameter
 * Return: encoded string
 */
char *leet(char *str)
{
	int x = 0, i;
	char leet[8] = {'O', 'L', '?', 'E','A', '?', '?', 'T'};

	while (str[++x])
	{
		for (i = 0; i <= 7; i++)
		{
			if (str[x] == leet[i] || str[x] - 32 == leet[i])
				str[x] = i + '0';
		}
	}
	return (str);
}

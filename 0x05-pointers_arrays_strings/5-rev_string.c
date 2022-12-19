#include "main.h"
/**
 * rev_string - reverses string
 * @s: parameter
 * Return: 0
 */
void rev_string(char *s)
{
	int i, j;
	char str[1000];

	i = 0;

	while (*(s + 1) != 0)
	{
		str[i] = *(s + 1);
		i++;
	}

	j = i - 1;
	i = 0;

	while (j >= 0)
	{
		*(s + j) = str[i];
		j--;
		i++;
	}
}

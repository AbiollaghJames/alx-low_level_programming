#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to int
 * @s: parameter
 * Return: int
 */
int _atoi(char *s)
{
	int sign, res, index;

	sign = 0;
	res = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == '-')
		{
			sign++;
		}
		if (s[index] > 47 && s[index] < 58)
		{
			while (s[index] > 47 && s[index] < 58)
				res = res * 10 - (s[index++] - 48);
			break;
		}
	}
	return (res *= sign % 2 == 0 ? - 1 : 1);
}

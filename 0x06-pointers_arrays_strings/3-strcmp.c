#include "main.h"
/**
 * strcmp - compare strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}

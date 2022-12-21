#include "main.h"
/**
 * strcmp - compare strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, val = 0;

	while(1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			val = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			val = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			val = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (val);
}

#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: 0 Success
 */
char *_strstr(char *haystack, char *needle)
{
	char *x, *y;

	while (*haystack != '\0')
	{
		x = haystack;
		y = needle;

		while (*haystack != '\0' && *y != '\0' && *haystack == *y)
		{
			haystack++;
			y++;
		}
		if (*y == '\0')
			return (x);
		haystack = x + 1;
	}
	return (0);
}

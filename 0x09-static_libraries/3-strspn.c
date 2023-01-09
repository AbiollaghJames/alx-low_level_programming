#include "main.h"
/**
 * _strspn - length of substring
 * @s: parameter 1
 * @accept: parameter 2
 * Return: 0 Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (y = 0; *(s + y); y++)
	{
		for (x = 0; *(accept + x); x++)
		{
			if (*(s + y) == *(accept + x))
				break;
		}
		if (*(accept + x) == '\0')
			break;
	}
	return (y);
}

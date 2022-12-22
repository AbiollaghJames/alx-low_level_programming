#include "main.h"
/**
 * leet - encode a string
 * @str: parameter
 * Return: encoded string
 */
char *leet(char *str)
{
	int x, y;
	int z[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int a[] = {'4', '3', '0', '7', '1'};

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y<= 9; y++)
		{
			if (str[x] == z[y])
			{
				str[x] = a[y / 2];
				y = 9;
			}
		}
	}
	return (str);
}

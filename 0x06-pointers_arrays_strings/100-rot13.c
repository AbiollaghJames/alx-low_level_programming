#include "main.h"
/**
 * rot13 - encodes
 * @str: parameter
 * Return: encoded
 */
char *rot13(char *str)
{
	int x, y = 13, z = 0;
	char swap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P', 'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f', 's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v', 'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M', 'Z', 'm', 'z'};

	while (str[z] != '\0')
	{
		for (x = 0; x <= 51; x++)
		{
			if (str[z] == swap[x])
			{
				str[z] = str[z] + y;
				x = 51;
			}
			y = y * -1;
		}
		z++;
	}
	return (str);
}

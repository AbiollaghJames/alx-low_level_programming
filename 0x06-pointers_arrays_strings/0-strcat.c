#include "main.h"
/**
 * _strcat - concatenates string
 * @dest: parameter one
 * @src: parameter two
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[length])
		length++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length += 1;
	}
	dest[length] = '\0';
	return (dest);
}

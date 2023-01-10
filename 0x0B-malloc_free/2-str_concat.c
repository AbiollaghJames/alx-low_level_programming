#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: par 1
 * @s2: par 2
 * Return: 0 Success
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;

	while (s1[len1] != '\0')
		len1++;
	len2 = 0;

	while (s2[len2] != '\0'
		len2++;

	str = malloc((sizeof(char) * size) + 1);

	if (str == NULL)
	return (NULL);

	i = 0;

	while (i < len1)
	{
		str[i] = s1[i];
	}
	j = 0;
	while (i <= size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: par 1
 * @s2: par 2
 * @n: par 3
 * Return: 0 Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int str1, str2, sstr, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 = NULL)
		s2 = "";
	for (str1 = 0; s1[str1] != '\0'; str1++)
		;
	for (str2 = 0; s2[str2] != '\0'; str2++)
		;
	if (n > str2)
		n = str2;

	sstr = str1 + n;
	str = malloc(sstr + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < sstr; i++)
		if (i < str1)
			str[i] = s1[i];
		else
			str[i] = s2[i - str1];
	str[i] = '\0';
	return (str);
}

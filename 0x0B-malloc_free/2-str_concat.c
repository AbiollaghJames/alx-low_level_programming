#include "main.h"
#include <stdlib.h>
/**
 * _str_len - length of string
 * @str: par
 * Return: 0 Success
 */
int _str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i + 1);
}
/**
 * str_concat - concatenates 2 strings
 * @s1: par 1
 * @s2: par 2
 * Return: 0 Success
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	s1_size = _str_len(s1);
	s2_size = _str_len(s2);

	ptr = (char *) malloc(((s1_size + s2_size) - 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}

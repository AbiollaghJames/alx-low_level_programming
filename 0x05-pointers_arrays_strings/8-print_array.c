#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: parameter 1
 * @n: parameter 2
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i, len1, len2;
	char tmp;

	while (s[len1] != '\0')
		len1++;

	len2 = len1 - 1;

	for (i = 0; i < len1; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2] = tmp;
		len2 -= 1;
	}
}

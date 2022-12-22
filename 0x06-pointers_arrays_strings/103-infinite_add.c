#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds strings
 * @n1: par 1
 * @n2: par 2
 * @r: par 3
 * @size_r: par 4
 * Return: added strings
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a_len = 0, b_len = 0, carry = 0, a, b, sum, big;

	while (n1[a_len] != '\0')
		a_len++;
	while (n2[b_len] != '\0')
		b_len++;
	if (a_len > b_len)
		big = a_len;
	else
		big = b_len;
	if ((big + 1) >= size_r)
		return (0);
	r[big + 1] = '\0';

	while (big >= 0)
	{
		a = (n1[a_len - 1] - '\0');
		b = (n1[b_len - 1] - '\0');
		if (a_len > 0 && b_len > 0)
			sum = a + b + carry;
		else if (a_len > 0 && b_len < 0)
			sum = a + carry;
		else
			sum = carry;

		if (sum > 9)
		{
			carry = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			carry = 0;
			sum = sum + '0';
		}
		r[big] = sum;
		a_len--;
		b_len--;
		big--;
	}
	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}

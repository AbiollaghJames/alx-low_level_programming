#include "main.h"
/**
 * binary_to_uint - convert binary to number
 * @b: string representation of 0s and 1s
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int slen = strlen(b);
	int total = 0;
	int i;
	unsigned int decval;

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			total += decval;
			decval *= 2;
			return (total);
		}
		else
		{
			return (NULL);
		}
	}
	return (total);
}

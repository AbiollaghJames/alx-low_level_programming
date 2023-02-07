#include "main.h"
/**
 * flip_bits - bits needed to flip to get from one number to another
 * @n: start
 * @m: target
 * Return: bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor, b = 0;

	xor = n ^ m;

	while (xor)
	{
		b += xor & 1;
		xor >>= 1;
	}
	return (b);
}

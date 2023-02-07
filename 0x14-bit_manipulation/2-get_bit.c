#include "main.h"
/**
 * get_bit - returns val of bit at an index
 * @n: int to be converted to binary
 * @index: index
 * Return: Bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = ((n >> index) & 1);

	if (index > 64)
		return (-1);
	return (b);
}

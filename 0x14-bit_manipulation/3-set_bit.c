#include "main.h"
/**
 * set_bit - sets value of a bit to 1 at given index
 * @n: pointer to a number
 * @index: index
 * Return: 1 success or -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}

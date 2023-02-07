#include "main.h"
/**
 * clear_bit - set svalue of bit to 0 at given index
 * @n: pointer to number
 * @index: where bit is set
 * Return: 1 on success or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}

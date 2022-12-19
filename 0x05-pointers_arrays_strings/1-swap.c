#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: parameter a
 * @b: parameter b
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

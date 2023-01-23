#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds 2 ints
 * @a: par 1
 * @b: par 2
 * Return: 0 Success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 ints
 * @a: par 1
 * @b: par 2
 * Return: 0 Success
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 ints
 * @a: par 1
 * @b: par 2
 * Return: 0 Success
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 ints
 * @a: par 1
 * @b: par 2
 * Return: 0 Success
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of 2 ints
 * @a: par 1
 * @b: par 2
 * Return: 0 Success
 */

int op_mod(int a, int b)
{
	return (a % b);
}

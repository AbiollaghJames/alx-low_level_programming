#include "main.h"
/**
 * abby - helper function to check if sqrt exists
 * @num: par 1
 * @sqr: possible sqrt
 * Return: 0 Sucess
 */
int abby(int num, sqr)
{
	if ((sqr * sqr) == num)
	{
		return (sqr);
	}
	else
	{
		if ((sqr * sqr) > num)
			return (-1);
		else
			return (abby(num, sqr + 1));
	}
}
/**
 * _sqrt_recursion - return square root of number
 * @n: parameter
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (abby(n, 0));
}

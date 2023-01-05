#include "main.h"
/**
 * abby - helper function to check if sqrt exists
 * @num: par 1
 * @sqr: possible sqrt
 * Return: 0 Sucess
 */
int abby(int n, s)
{
	int square = s * s;

	if (square > n)
		return (-1);
	if (square == n)
		return (s);
	return (abby(n, s + 1));
}
/**
 * _sqrt_recursion - return square root of number
 * @n: parameter
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (abby(n, 1));
}

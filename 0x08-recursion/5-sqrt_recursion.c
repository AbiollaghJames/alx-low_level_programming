#include "main.h"
/**
 * abby - helper function to check if sqrt exists
 * @n: par 1
 * @i: possible sqrt
 * Return: 0 Sucess
 */
int abby(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (abby(n, i + 1));
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

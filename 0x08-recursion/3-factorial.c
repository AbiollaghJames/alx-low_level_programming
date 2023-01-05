#include "main.h"
/**
 * factorial - return factorials
 * @n: parameter
 * Return: 0 Success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}

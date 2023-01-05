#include "main.h"
/**
 * factorial - return factorials
 * @n: parameter
 * Return: 0 Success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n + factorial(n - 1));
	}
}

#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	if ( n < 0)
	{
		n = -n;
	}
	return (n % 10);
}

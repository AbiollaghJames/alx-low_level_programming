#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x *= -1;
	}
	_putchar(x + '0');
}

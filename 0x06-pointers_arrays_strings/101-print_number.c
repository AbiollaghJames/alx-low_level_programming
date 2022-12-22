#include "main.h"
/**print_number - prints ints
 * @n: parameter
 * Return: printed ints
 */
void print_number(int n)
{
	int i, j, dig, digs, pow;
	unsigned int tmp, numchar, num;

	dig = 0;

	if (n < 0)
	{
		_putchar('-');
		tmp = -n;
	}
	else
	{
		tmp = n;
	}
	num = tmp;

	while (num >= 10)
	{
		num = num / 10;
		dig++;
	}
	digs = dig + 1;
	pow = 1;
	i = 1;

	while (i < digs)
	{
		pow = pow * 10;
		i++;
	}
	j = pow;

	while (j >= 1)
	{
		numchar = (tmp / j) % 10;
		_putchar(numchar + '0');
		j = j / 10;
	}
}

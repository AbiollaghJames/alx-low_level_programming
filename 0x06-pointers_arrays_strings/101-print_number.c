#include "main.h"
/**print_number - prints ints
 * @n: parameter
 * Return: printed ints
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-')
			x = -x;
	}
	if ((x / 10) > 0)
		print_numbere(x / 10);
	_putchar((x % 10) + '0');
}

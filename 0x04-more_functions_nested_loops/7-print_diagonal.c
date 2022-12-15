#include "main.h"
/**
 * print_diagonal - Prints diagonal line
 * @n: parameter
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int diag, spc;

	if (n > 0)
	{
		for (diag = 0; diag <= n; diag++)
		{
			for (spc = 0; spc <= diag; spc++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (diag == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

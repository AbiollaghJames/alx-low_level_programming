#include "main.h"
/**
 * _pow_recursion - gets the power of x
 * @x: parameter 1
 * @y: parameter 2
 * Return: 0 Success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	return (_pow_recursion(x, y - 1) * x);
}

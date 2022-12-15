#include "main.h"
/**
 * _isupper - Checks for uppercase
 *@c: parameter
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c <= 'z' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

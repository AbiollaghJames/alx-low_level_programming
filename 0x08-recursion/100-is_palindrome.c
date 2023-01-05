#include "main.h"

/**
 * pal - obtains length of y
 * @y: par 1
 * @z: par 2
 *
 * Return: On success 1
 */
int pal(char *y, int z)
{
	if (*y == 0)
		return (z - 1);
	return (pal(y + 1, z + 1));
}
/**
 * pal2 - compares strings reversed
 * @y: par 1
 * @z: par 2
 *
 * Return: On success 1
 */

int pal2(char *y, int z)
{
	if (*y != *(y + z))
		return (0);
	else if (*y == 0)
		return (1);
	return (pal2(y + 1, z - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1
 */
int is_palindrome(char *s)
{
	int z;

	z = pal(s, 0);
	return (pal2(s, z));
}

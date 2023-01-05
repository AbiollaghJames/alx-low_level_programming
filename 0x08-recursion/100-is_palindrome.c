#include "main.h"
/**
 * _length - length of string
 * @s: parameter
 * Return: 0 Sucess
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}
/**
 * _ispal - checks if palindrome
 * @x: par 1
 * @y: par 2
 * @s: par 3
 * Return: 0 Sucess
 */
int _ispal(int x, int y, char s)
{
	if (y > 0)
	{
		if (s[x] == s[y])
		{
			return (_ispal(x + 1, y - 1, s));
		}
		else if (s[x] != s[y])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
 * is_palindrome - checks for palindrome
 * @s: parameter
 * Return: palindrome
 */
int is_palindrome(char *s)
{
	return (_ispal(0, _length(s) - 1, s));
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abby;

	for (abby = 'z'; abby >= 'a'; abby--)
	{
		putchar(abby);
	}
	putchar('\n');
	return (0);
}

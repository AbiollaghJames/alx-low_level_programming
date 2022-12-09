#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char aj;
	aj = 'a';

	while (aj <= 'z')
	{
		if ((aj != 'q' || aj != 'e') && aj <= 'z')
			putchar(aj);
		aj++;
	}
	putchar('\n');
	return (0);
}

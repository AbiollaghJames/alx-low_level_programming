#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 )Success)
 */
int main(void)
{
	int abb1, abb2;

	for (abb1 = 0; abb1 < 9; abb1++)
	{
		for (abb2 = abb1 + 1; abb2 < 10; abb2++)
		{
			putchar((abb1 % 10) + '0');
			putchar((abb2 % 10) + '0');

			if (abb1 == 8 && abb2 == 9)
				continue;

			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 )Success)
 */
int main(void)
{
	int abb1, abb2, abb3;

	for (abb1 = 0; abb1 < 9; abb1++)
	{
		for (abb2 = abb1 + 1; abb2 < 9; abb2++)
		{
			for (abb3 = abb2 + 1; abb3 < 10; abb3++)
			{
				putchar((abb1 % 10) + '0');
				putchar((abb2 % 10) + '0');
				putchar((abb3 % 10) + '0');

				if (abb1 == 7 && abb2 == 8 && abb3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

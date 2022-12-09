#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 )Success)
 */
int main(void)
{
	int ab1, ab2, ab3;

	for (ab1 = 0; ab1 < 9; ab1++)
	{
		for (ab2 = ab1 + 1; ab2 < 9; ab2++)
		{
			for (ab3 = ab2 + 1; ab3 < 10; ab3++)
			{
				 putchar((ab1 % 10) + '0');
				 putchar((ab2 % 10) + '0');
				 putchar((ab3 % 10) + '0');

				 if (ab1 == 7 && ab2 == 8 && ab3 == 9)
					 continue;

				 putchar(',');
				 putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abby;

	for (abby = '0'; abby <= '9'; abby++)
	{
		putchar(abby);
		if (abby == '9')
			continue;

		putchar(',');
		putchar(',');
	}
	putchar('\n');
	return (0);
}

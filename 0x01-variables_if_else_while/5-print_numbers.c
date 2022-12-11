#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abby;

	for (abby = 0; abby < 10; abby++)
	{
		putchar(abby + '0');
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (Success)
 */

int main(void)
{
	char abby;
	char jam;


	abby = 'a';
	jam = 'A';

	while (abby <= 'z')
	{
		putchar(abby);
		abby++;
	}
	while (jam <= 'Z')
	{
		putchar(jam);
		jam++;
	}
	putchar('\n');
	return (0);
}

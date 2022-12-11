#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 98; digit1++)
	{
		putchar((digit1 / 10) + '0');	
		putchar((digit1 % 10) + '0');		
		putchar(32);
		putchar((digit2 / 10) + '0');
		putchar((digit2 % 10) + '0');

		if (digit1 / 10 != 9 || digit1 % 10 != 8)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(44);
	putchar(32);
}

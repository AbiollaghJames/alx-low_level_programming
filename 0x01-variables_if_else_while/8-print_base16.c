#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int dig;

	for (dig = '0'; dig <= '9'; dig++)
	{
		putchar(dig);

		if (dig == '9')
		{
			dig = 'a';

			for (; dig <= 'f'; dig++)
			{
				putchar(dig);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}

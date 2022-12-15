#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long prime = 612852475143, dividor;

	while (dividor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (dividor = 3; dividor < (prime / 2); dividor += 2)
		{
			if ((prime % dividor) == 0)
				prime /= dividor;
		}
	}
	printf("%ld'n", prime);
	return (0);
}

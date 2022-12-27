#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers
 * @n: parameter
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
	{
		printf("%d", x);

		if (x < 98)
			printif(", ");
	}
	printf("\n");
}

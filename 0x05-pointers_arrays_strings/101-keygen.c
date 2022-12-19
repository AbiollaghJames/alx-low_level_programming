#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * description: finds checksum value from objdump
 *
 * Return: 0
 */


int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;

	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);
	return (0);
}

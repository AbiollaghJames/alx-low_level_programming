#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int count = 3;
	long int x = 1, y = 2;
	long int res = x + y;

	printf("%lu, ", x);
	printf("%lu, ", y);

	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%lu \n", res);
		}
		else
		{
			printf("%lu ", res);
		}

		x = y;
		y = res;

		res = x + y;
		count++;
	}
	return (0);
}

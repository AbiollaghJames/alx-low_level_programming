#include <stdio.h>
/**
 * main - Entry point
 *
 * Return; 0
 */
int main(void)
{
	int count = 3;
	long int first = 1, sec = 2;
	long int res = first + sec;

	printf("%lu, ", first);
	printf("%lu, ", sec);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu /n", res);
		}
		else
		{
			printf("%lu, ", res);
		}
		first = sec;
		sec = res;

		res = first + sec;
		count++;
	}
	return (0);
}

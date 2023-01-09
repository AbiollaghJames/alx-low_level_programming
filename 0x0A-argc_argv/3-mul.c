#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication
 * @argc: par 1
 * @argv: par 2
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int res, x, y;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	res = x * y;

	printf("%d\n", res);
	return (0);
}

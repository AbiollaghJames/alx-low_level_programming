#include <stdio.h>
/**
 * main - addition
 * @argc: par 1
 * @argv: par 2
 * Return: 0 Success
 */
int main(int argc, char *argv)
{
	int res, num, x, y, z;

	if (argc == 1)
		printf("0\n");

	for (x = 0; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (z = 0; z < argc; z++)
	{
		num = atoi(argv[z]);
		res += num;
	}
	printf("%d\n", res);
	return (0);
}

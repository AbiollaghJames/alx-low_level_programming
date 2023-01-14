#include <stdlib.h>
#include <stdio.h>
/**
 * main -Entry point
 * @argc: par 1
 * @argv: par 2
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
	 			exit(98);
			}
		}
	}
	mul = atol(argv[1]) *atol(argv[1]);
	printf("%lu\n", mul);
	return (0);
}

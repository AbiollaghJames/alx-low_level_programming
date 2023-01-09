#include <stdio.h>
/**
 * main - print all arguments
 * @argc: par 1
 * @argv: par 2
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

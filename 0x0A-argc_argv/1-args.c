#include <stdio.h>
/**
 * main - prints number of args
 * @argc: par 1
 * @argv: par 2
 * Return: 0 Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

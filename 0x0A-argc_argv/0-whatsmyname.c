#include <stdio.h>
/**
 * main - prints program name
 * @argc: par 1
 * @argv: par 2
 * Return: 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

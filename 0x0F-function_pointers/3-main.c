#include "3-calc.h"
/**
 * main - performs operations
 * @argc: no. of arguments
 * @argv: array of arguments
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, res;
	char x;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if ((x == '/' || x == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit (98);
	}
	res = func(arg1, arg2);
	printf("%d\n", res);
	return (0);
}

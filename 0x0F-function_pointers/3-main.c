#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* Main - Prints calculator result
*
* @argc: int of commandline args
*
* @argv: 2-d array of commandline args
*
* Return: 0 success, 98 for argc error, 100 if Div 0
*/

int main (int argc, char *argv[])
{
	int x = 0, y = 0, res = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check if only one opearnd*/
	if (argv[2][1] != '\0')
	{
		printf("Error\n")
			exit(99);
	}

	s = argv[2][0];

	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	res = (get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}

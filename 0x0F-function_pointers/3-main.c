#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main
 * @argc: Argc
 * @argv: Argv
 *
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	orpt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

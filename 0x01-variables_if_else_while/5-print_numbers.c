#include <stdio.h>

/**
 * main - main block
 * a program that prints all single digit numbers of base 10 starting from 0
 * return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}

	putchar('\n');

	return (0);
}

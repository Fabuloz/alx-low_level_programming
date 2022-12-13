#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: number to be checked
 *
 * Return: 1 for positive, 0 for zero, -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return ('\n');
}

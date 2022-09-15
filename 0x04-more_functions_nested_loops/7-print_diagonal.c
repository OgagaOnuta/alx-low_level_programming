#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of times line should be drawn
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

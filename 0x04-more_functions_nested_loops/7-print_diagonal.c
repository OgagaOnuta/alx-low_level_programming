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
		int i, j;

		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

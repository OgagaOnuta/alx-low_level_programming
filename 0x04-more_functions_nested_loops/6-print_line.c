#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: Number of times line should be drawn
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

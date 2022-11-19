#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: Size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		j = 1;
		while (size)
		{
			i = size;
			while (--i)
			{
				_putchar(' ');
			}

			k = j;
			while (k--)
			{
				_putchar('#');
			}

			_putchar('\n');
			j++;
			size--;
		}
	}
	else
		_putchar('\n');
}

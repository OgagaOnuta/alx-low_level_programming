#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: Number table
 *
 * Return: void.
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, mul, x, y, z;

		i = 0;
		while (i <= n)
		{
			j = 1;
			if ((j - 1) == 0)
				_putchar('0');
			while (j <= n)
			{
				mul = i * j, x = mul / 100;
				y = (mul / 10) % 10, z = (mul % 100) % 10;

				if (mul < 10)
				{
					_putchar(','), _putchar(' ');
					_putchar(' '), _putchar(' ');
					_putchar(mul + '0');
				}
				else if (mul >= 10 && mul < 100)
				{
					_putchar(','), _putchar(' ');
					_putchar(' '), _putchar(y + '0');
					_putchar(z + '0');
				}
				else if (mul >= 100)
				{
					_putchar(','), _putchar(' ');
					_putchar(x + '0'), _putchar(y + '0');
					_putchar(z + '0');
				}
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}

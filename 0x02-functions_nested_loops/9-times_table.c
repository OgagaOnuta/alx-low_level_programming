#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0, j, mul, mulA, mulB;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			mul = i * j;
			mulA = mul / 10;
			mulB = mul % 10;
			if (mulA)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(mulA + '0');
				_putchar(mulB + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mulB + '0');
			}		
			if (j != 9)
				_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

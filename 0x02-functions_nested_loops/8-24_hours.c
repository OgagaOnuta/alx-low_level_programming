#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * void: No parameter
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a = 0, a1, a2, a3, a0;
	int b1, b2, b3, b0;
	int c2, c3, c0;
	int d3, d0;

	while (a <= 2)
	{
		a1 = a;
		b1 = 0;

		while (b1 <= 3)
		{
			a2 = a1;
			b2 = b1
			c2 = 0;

			while (c2 <= 5)
			{
				a3 = a2;
				b3 = b2;
				c3 = c2
				d3 = 0;

				while (d3 <= 9)
				{
					a0 = a3;
					b0 = b3;
					c0 = c3;
					d0 = d3;

					_putchar(a0 + '0');
					_putchar(b0 + '0');
					_putchar(':');
					_putchar(c0 + '0');
					_putchar(d0 + '0');
					_putchar('\n');
					d3++;
					break;
				}
				c2++;
				break;
			}
			b1++;
			break;
		}
		a++;
	}
}

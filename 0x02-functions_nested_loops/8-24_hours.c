#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * void: No parameter
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a = 0, b, c, d;

	while (a <= 2)
	{
		_putchar(a + '0');
		b = 0;

		while (b <= 3)
		{
			_putchar(b + '0');
			_putchar(':');
			c = 0;

			while (c <= 5)
			{
				_putchar(c + '0');
				d = 0;

				while (d <= 9)
				{
					_putchar(d + '0');
					_putchar('\n');
					d++;
					break;
				}
				c++;
				break;
			}
			b++;
			break;
		}
		a++;
	}
}

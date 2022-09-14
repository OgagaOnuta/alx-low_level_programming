#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * void: No parameter
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a = 0, a0;
	int b0;

	while (a <= 23)
	{
		a0 = a, b0 = 0;

		while (b0 <= 59)
		{
			a0 = a;
/*
			if (a0 <= 9 || b0 <= 9)
			{
				
			}
*/
			_putchar(a0 + '0');
			_putchar(':');
			_putchar(b0 + '0');
			_putchar('\n');
			b0++;
			continue;
		}
		a++;
	}
}

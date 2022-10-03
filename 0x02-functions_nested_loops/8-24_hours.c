#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * void: No parameter
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h1 = '0', h2, m1, m2;

	while (h1 <= '2')
	{
		h2 = '0';
		while (h2 <= '9')
		{
			if (h1 == '2' && h2 == '4')
			{
				break;
			}
			else
			{
				m1 = '0';
			}
			while (m1 <= '5')
			{
				m2 = '0';
				while (m2 <= '9')
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}

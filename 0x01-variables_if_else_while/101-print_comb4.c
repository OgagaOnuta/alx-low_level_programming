#include <stdio.h>

/**
 * main - Entry point
 * @void: No argument
 *
 * Return: 0
 */

int main(void)
{
	int f1 = '0', s2, t3;

	while (f1 <= '7')
	{
		s2 = '1';
		while (s2 <= '8')
		{
			t3 = '2';
			while (t3 <= '9')
			{
				if (f1 < s2 && s2 < t3)
				{
					putchar(f1);
					putchar(s2);
					putchar(t3);
					if (f1 == '7' && s2 == '8' && t3 == '9')
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				t3++;
			}
			s2++;
		}
		f1++;
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * @void: No argument
 *
 * Return: 0
 */

int main(void)
{
	int f1, s2, t3, f4;

	f1 = '0';
	while (f1 <= '9')
	{
		s2 = '0';
		while (s2 <= '9')
		{
			t3 = '0';
			while (t3 <= '9')
			{
				f4 = '0';
				while (f4 <= '9')
				{
					if ((f1 + s2) < (t3 + f4))
					{
					putchar(f1);
					putchar(s2);
					putchar(' ');
					putchar(t3);
					putchar(f4);
					if (f1 == '9' && s2 == '8' && t3 == '9' && f4 == '9')
					{
						putchar('\n');
						break;
					}
					
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
					f4++;
				}
				t3++;
			}
			s2++;
		}
		f1++;
	}
	return (0);
}

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
	int F1, S2, T3;

	while (f1 <= '7')
	{
		s2 = '1';
		while (s2 <= '8')
		{
			t3 = '2';
			while (t3 <= '9')
			{
				F1 = f1, S2 = s2, T3 = t3;
				if ((F1 < S2 && S2 < T3) && (F1 != '7'))
				{
					putchar(F1);
					putchar(S2);
					putchar(T3);
					putchar(',');
					putchar(' ');
				}
				if (F1 == '7' && S2 == '8' && T3 == '9')
				{
					putchar(F1);
					putchar(S2);
					putchar(T3);
					putchar('\n');
				}
				t3++;
			}
			s2++;
		}
		f1++;
	}
	return (0);
}

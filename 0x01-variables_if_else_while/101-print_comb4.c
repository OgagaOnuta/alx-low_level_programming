#include <stdio.h>

/**
* main - Entry point
* void: No argument
*
* Return: 0
*/

int main(void)
{
	int f1 = '0';
	int s2 = '1';
	int t3 = '2';
	int cntS2 = '0';
	int cntT3 = '0';

	while (f1 <= '7' && s2 <= '8' && t3 <= '9' && (f1 < s2 && f1 < t3 && s2 < t3))
	{
		cntS2 = s2;
		while (cntS2 <= '8')
		{
			cntT3 = t3;
			while (cntT3 <= '9')
			{
				putchar(f1);
				putchar(s2);
				putchar(t3);
				if (f1 == '7' && s2 == '8' && t3 == '9')
				{
					putchar('\n');
					return (0);
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				if (f1 == s2 || s2 == t3)
				{
					return (0);
				}
				cntT3++;
			}
			cntS2++;
		}
		f1++;
		s2++;
		t3++;
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * void: No argument
 *
 * Return: 0
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);

		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
			return (0);
		}

		num++;
	}

	return (0);
}

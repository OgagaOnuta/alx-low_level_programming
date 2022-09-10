#include <stdio.h>

/**
 * main - Entry point
 * @void: No argument
 *
 * Return: 0
 */

int main(void)
{
	int first = '0', second;

	while (first <= '8')
	{
		second = '1';
		while (second <= '9')
		{
			if (first != second && first < second)
			{
				putchar(first);
				putchar(second);
				if (first == '8' && second == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			second++;
		}
		first++;
	}

	return (0);
}

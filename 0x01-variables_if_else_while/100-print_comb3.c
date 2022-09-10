#include <stdio.h>

/**
* main - Entry point
* void: No argument
*
* Return: 0
*/

int main(void)
{
	int first = '0';
	int second = '1';
	int countSecond = '0';

	while (first <= '8' && second <= '9' && first < second)
	{
		countSecond = second;

		while (countSecond <= '9')
		{
			putchar(first);
			putchar(countSecond);
			putchar(',');
			putchar(' ');
			countSecond++;

			if (first == countSecond)
			{
				return (0);
			}
		}

		if (first == '8' && second == '9')
		{
			putchar('\n');
			return (0);
		}

		first++;
		second++;
	}

	return (0);
}

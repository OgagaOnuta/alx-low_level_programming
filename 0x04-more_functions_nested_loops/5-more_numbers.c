#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 ten times
 * @void: No parameters
 *
 * Return: void
 */

void more_numbers(void)
{
	char i = 1, j;
	char numA, numB;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			numA = j / 10;
			numB = j % 10;

			if (numA)
			{
				_putchar(numA + '0');
			}
				_putchar(numB + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 ten times
 * @void: No parameters
 *
 * Return: void
 */

void more_numbers(void)
{
	int numB;
	int i = 0;

	while (i <= 9)
	{
		numB = 0;
		while (numB <= 14)
		{
			_putchar(numB + '0');
			numB++;
		}
		_putchar('\n');
		i++;
	}
}

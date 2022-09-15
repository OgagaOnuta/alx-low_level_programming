#include "main.h"

/**
 * print_most_numbers - Prints some numbers from 0 to 9
 * @void: No parameter
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char numB = '0';

	while (numB <= '9')
	{
		if (numB == '2' || numB == '4')
		{
			numB++;
		}
		_putchar(numB);
		numB++;
	}

	_putchar('\n');
}

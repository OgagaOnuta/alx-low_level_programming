#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * @void: No parameters
 *
 * Return: void
 */

void print_numbers(void)
{
	char numB = '0';

	while (numB <= '9')
	{
		_putchar(numB);
		numB++;
	}

	_putchar('\n');
}

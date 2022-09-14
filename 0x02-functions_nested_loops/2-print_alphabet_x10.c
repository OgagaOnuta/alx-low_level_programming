#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets 10 times
 * @void: No argument
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char lowAlpha = 'a';
	int i;

	while (lowAlpha <= 'z')
	{
		_putchar(lowAlpha);
		i = 0;

		while (i < 10)
		{
			_putchar('\n');
		}
		lowAlpha++;
	}
}

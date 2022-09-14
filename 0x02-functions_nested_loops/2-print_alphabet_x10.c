#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets 10 times
 * @void: No argument
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char lowAlpha;
	int i = 0;

	while (i < 10)
	{
		lowAlpha = 'a';

		while (lowAlpha <= 'z')
		{
			_putchar(lowAlpha);
			lowAlpha++;
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet - Entry point
 * @void: No argument
 *
 * Return: void
 */

void print_alphabet(void)
{
	char lowAlpha = 'a';

	while (lowAlpha <= 'z')
	{
		_putchar(lowAlpha);
		lowAlpha++;
	}

	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: String to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int k = strlen(s);

	while (k)
	{
		_putchar(s[k - 1]);
		k--;
	}
	_putchar('\n');
}

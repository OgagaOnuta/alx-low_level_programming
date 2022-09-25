#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int k = strlen(str), i = (k + 1) / 2;

	while (i < k)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

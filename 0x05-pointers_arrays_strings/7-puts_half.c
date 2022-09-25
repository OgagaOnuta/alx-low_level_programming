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
	int k = strlen(str), i;

	if (k % 2 == 1)
	{
		i = (k - 1) / 2;
		while (i < k)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = k / 2;
		while (i < k)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}

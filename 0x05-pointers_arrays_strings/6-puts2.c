#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other two characters of a string
 * @str: String to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, k = strlen(str);

	while (i <= k)
	{
		_putchar(str[i]);
		i+=2;
	}
	_putchar('\n');
}

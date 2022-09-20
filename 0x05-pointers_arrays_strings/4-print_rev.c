#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = _strlen(s);
	char j[i] = s;
	int k = i - 1;

	while (k)
	{
		_putchar(j[k]);
		k--;
	}
}

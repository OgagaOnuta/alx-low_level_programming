#include "main.h"

/**
 * main - Entry point
 * @void: No argument
 *
 * Return: 0
 */

int main(void)
{
	char charput[] = "_putchar\n";
	int i = 0;

	while (i < 9)
	{
		_putchar(charput[i]);
		i++;
	}

	return (0);
}

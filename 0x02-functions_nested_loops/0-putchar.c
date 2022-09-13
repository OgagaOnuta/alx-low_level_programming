#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * @void: No argument
 *
 * Return: 0
 */

int main(void)
{
	char charput[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(charput[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}

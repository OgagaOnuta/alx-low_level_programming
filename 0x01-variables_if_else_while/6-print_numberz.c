#include <stdio.h>

/**
 * main - Entry point
 * void: No argument
 *
 * Return: 0
 */

int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');
	return (0);
}

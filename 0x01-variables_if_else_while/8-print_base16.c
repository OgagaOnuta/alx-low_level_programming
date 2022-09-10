#include <stdio.h>

/**
 * main - Entry point
 * void: No argument
 *
 * Return: 0
 */

int main(void)
{
	char hexNum = '0';
	char hexAlpha = 'a';

	while (hexNum <= '9')
	{
		putchar(hexNum);
		hexNum++;
	}

	while (hexAlpha <= 'f')
	{
		putchar(hexAlpha);
		hexAlpha++;
	}

	putchar('\n');
	return (0);
}

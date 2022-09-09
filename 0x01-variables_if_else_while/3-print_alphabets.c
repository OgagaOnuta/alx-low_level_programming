#include <stdio.h>

/**
 * main - Entry point
 * void: No argument
 *
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}

	putchar('\n');
	return (0);
}

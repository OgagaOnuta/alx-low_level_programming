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

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}

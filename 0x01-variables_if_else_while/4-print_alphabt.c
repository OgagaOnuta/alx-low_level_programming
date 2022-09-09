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

		if (alphabet == 'e')
		{
			alphabet++;
		}
		else if (alphabet == 'q')
		{
			alphabet++;
		}
	}

	putchar('\n');
	return (0);
}

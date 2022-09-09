#include <stdio.h>

/**
* main - Entry point
* void: No argument
*
* Return: 0
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}

	printf("\n");
	return (0);
}

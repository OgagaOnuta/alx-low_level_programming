#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, x, y, sum;

	i = 1, x = 1, y = 2;

	printf("%d, %d", x, y);
	while (i < 48)
	{
		sum = x + y;
		x = y, y = sum;
		printf(", %d", sum);
		i++;
	}

	printf("\n");
	return (0);
}

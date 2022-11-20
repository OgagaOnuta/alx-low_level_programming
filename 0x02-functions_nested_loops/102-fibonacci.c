#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i, x, y, sum;

	i = 1, x = 1, y = 2;

	printf("%ld, %ld", x, y);
	while (i < 49)
	{
		sum = x + y;
		printf(", %ld", sum);
		x = y, y = sum;
		i++;
	}

	printf("\n");
	return (0);
}

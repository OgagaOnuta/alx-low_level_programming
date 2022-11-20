#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int x, y, sum;
	int i;

	i = 1, x = 1, y = 2;

	printf("%lu, %lu", x, y);
	while (i < 97)
	{
		sum = x + y;
		printf(", %lu", sum);
		x = y, y = sum;
		i++;
	}

	printf("\n");
	return (0);
}

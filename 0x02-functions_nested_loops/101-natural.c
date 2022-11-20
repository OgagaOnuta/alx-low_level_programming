#include <stdio.h>

/**
 * main - Sum of natural number below 1024, which are multiples of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, sum;

	i = 1, sum = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

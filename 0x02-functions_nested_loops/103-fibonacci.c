#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms in a Fibonacci sequence
 *
 * Description: The Fibonacci sequence values should not exceed 4,000,000.
 * Return: Always 0.
 */

int main(void)
{
	long int x, y, sum, fibo_even;

	x = 1, y = 2, sum = 0, fibo_even = 2;

	while (sum < 4000000)
	{
		sum = x + y;
		if ((sum % 2) == 0)
			fibo_even += sum;
		x = y, y = sum;
	}

	printf("%ld\n", fibo_even);
	return (0);
}

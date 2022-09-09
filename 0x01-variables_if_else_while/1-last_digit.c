#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * void: No argument
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int endDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	endDigit = n % 10;

	if (endDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, endDigit);
	}
	else if (endDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, endDigit);
	}
	else if ((endDigit < 6) && (endDigit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, endDigit);
	}

	return (0);
}

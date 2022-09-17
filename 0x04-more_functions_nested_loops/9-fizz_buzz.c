#include <stdio.h>

/**
 * main - Entry point
 * @void: No parameter
 *
 * Return: 0
 */

int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		printf(" ");
		x++;
	}

	printf("\n");
	return (0);
}

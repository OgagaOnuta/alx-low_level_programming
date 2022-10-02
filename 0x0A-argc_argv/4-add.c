#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positve numbers.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if success, 1 if fail.
 */

int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

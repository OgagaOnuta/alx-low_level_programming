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
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	if (argc > 1)
	{
		i = 1;
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
	}

	return (0);
}

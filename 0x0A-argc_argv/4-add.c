#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

	if (argc == 1)
	{
		sum = 0;
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			if (isdigit(*argv[i]) != 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
	}

	printf("%d\n", sum);
	return (0);
}

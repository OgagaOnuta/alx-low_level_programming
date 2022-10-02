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
	int i = 1, j, sum = 0;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (isdigit(*argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

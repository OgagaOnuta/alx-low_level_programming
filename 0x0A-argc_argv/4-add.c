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
	int i, add;

	if (argc == 1)
	{
		add = 0;
	}
	else if (argc > 1)
	{
		i = 1, add = 0;
		while (i < argc)
		{
			if (atoi(argv[i]) >= 0)
			{
				add += atoi(argv[i]);
				if (atoi(argv[i]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				i++;
			}
		}
	}

	printf("%d\n", add);
	return (0);
}

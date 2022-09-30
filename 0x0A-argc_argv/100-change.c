#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum no. of coins to make change for an amount of money.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if success, 1 if no argument, 0 if negative argument
 */

int main(int argc, char **argv)
{
	int num, rem;
	
	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	
	if (atoi(argv[1]) < 0)
	{
		num = 0;
	}
	else if (atoi(argv[1]) >= 25)
	{
		num = atoi(argv[1]) / 25;
		rem = atoi(argv[1]) % 25;
		if (rem >= 10)
		{
			num += rem / 10;
			rem %= 10;
		}
		if (rem >= 5)
		{
			num += rem / 5;
			rem %= 5;
		}
		if (rem >= 2)
		{
			num += rem / 2;
			rem %= 2;
		}
		if (rem == 1)
		{
			num += rem;
		}
	}
	else if (atoi(argv[1]) >= 10)
	{
		num = atoi(argv[1]) / 10;
		rem = atoi(argv[1]) % 10;
		if (rem >= 5)
		{
			num += rem / 5;
			rem %= 5;
		}
		if (rem >= 2)
		{
			num += rem / 2;
			rem %= 2;
		}
		if (rem == 1)
		{
			num += rem;
		}
	}
	else if (atoi(argv[1]) >= 5)
	{
		num = atoi(argv[1]) / 5;
		rem = atoi(argv[1]) % 5;
		if (rem >= 2)
		{
			num += rem / 2;
			rem %= 2;
		}
		if (rem == 1)
		{
			num += rem;
		}
	}
	else if (atoi(argv[1]) >= 2)
	{
		num = atoi(argv[1]) / 2;
		rem = atoi(argv[1]) % 2;
		if (rem == 1)
		{
			num += rem;
		}
	}
	else if (atoi(argv[1]) == 1)
	{
		num = 1;
	}
	
	printf("%d\n", num);
	return (0);
}

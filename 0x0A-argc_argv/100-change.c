#include <stdio.h>
#include <stdlib.h>

int change25(int n);
int change10(int n);
int change5(int n);
int change2(int n);

/**
 * main - Prints the minimum no. of coins to make change.
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if success, 1 if no argument, 0 if negative argument
 */

int main(int argc, char **argv)
{
	int num;

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
		num = change25(atoi(argv[1]));
	}
	else if (atoi(argv[1]) >= 10)
	{
		num = change10(atoi(argv[1]));
	}
	else if (atoi(argv[1]) >= 5)
	{
		num = change5(atoi(argv[1]));
	}
	else if (atoi(argv[1]) >= 2)
	{
		num = change2(atoi(argv[1]));
	}
	else if (atoi(argv[1]) == 1)
	{
		num = 1;
	}

	printf("%d\n", num);
	return (0);

}

/**
 * change25 - Prints the minimum no. of 25 cents coins to make change.
 * @n: Amount of money
 *
 * Return: No. of change
 */

int change25(int n)
{
	int num = n / 25;
	int rem = n % 25;

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
	return (num);
}

/**
 * change10 - Prints the minimum no. of 10 cents coins to make change.
 * @n: Amount of money
 *
 * Return: No. of change
 */

int change10(int n)
{
	int num = n / 10;
	int rem = n % 10;

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
	return (num);
}

/**
 * change5 - Prints the minimum no. of 5 cents coins to make change.
 * @n: Amount of money
 *
 * Return: No. of change
 */

int change5(int n)
{
	int num = n / 5;
	int rem = n % 5;

	if (rem >= 2)
	{
		num += rem / 2;
		rem %= 2;
	}
	if (rem == 1)
	{
		num += rem;
	}
	return (num);
}

/**
 * change2 - Prints the minimum no. of 2 cents coins to make change.
 * @n: Amount of money
 *
 * Return: No. of change
 */

int change2(int n)
{
	int num = n / 2;
	int rem = n % 2;

	if (rem == 1)
	{
		num += rem;
	}
	return (num);
}

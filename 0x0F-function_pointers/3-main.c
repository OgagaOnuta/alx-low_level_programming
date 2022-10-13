#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Run the code
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
/**
 *	if (argv[2] != s)
 *	{
 *		printf("Error\n");
 *		exit(99);
 *		}
 *	if ((s[3] && argv[3] == 0) || (s[4] && argv[3] == 0))
 *	{
 *		printf("Error\n");
 *		exit(100);
 *	}
 */	
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

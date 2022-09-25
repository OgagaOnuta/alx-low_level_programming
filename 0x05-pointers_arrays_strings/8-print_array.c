#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to array
 * @n: Array size
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d\n", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
		i++;
	}
}

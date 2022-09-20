#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Argument to be swapped
 * @b: Argument to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

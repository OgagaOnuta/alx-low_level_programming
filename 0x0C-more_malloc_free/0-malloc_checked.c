#include <stdlib.h>

/**
 * malloc_checkde - Allocates memory using malloc function.
 * @b: Size of memory
 *
 * Return: Pointer to memory on success, 98 on failure.
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}

#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Given array
 * @size: Size of the array
 * @action: Function to be executed
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

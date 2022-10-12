/**
 * int_index - Searches for an integer
 * @array: Given array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function use to compare values
 *
 * Return: Index of the first element for which cmp does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp && array)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}

	return (-1);
}

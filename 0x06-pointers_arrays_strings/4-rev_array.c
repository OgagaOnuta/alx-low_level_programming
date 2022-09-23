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

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array
 * @n: Number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < (n / 2))
	{
		int *ap = &a[i], *bp = &a[n - i - 1];

		swap_int(ap, bp);
		i++;
	}
}

#include <stdlib.h>

/**
 * alloc_grid - Allocate memory to a 2-dimensional array of integers.
 * @width: Width of array
 * @height: Height of array
 *
 * Return: Pointer to array on success, NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **twoDimArray;
	int i = 0, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	twoDimArray = malloc(sizeof(**twoDimArray) * (width * height));
	if (twoDimArray == NULL)
	{
		return (NULL);
	}

	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			twoDimArray[i][j] = 0;
			j++;
		}
		i++;
	}
	free(twoDimArray);
	return (twoDimArray);
}

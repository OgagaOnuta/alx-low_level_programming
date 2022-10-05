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
		return (NULL);

	twoDimArray = malloc(sizeof(int *) * height);
	if (twoDimArray == NULL)
		return (NULL);

	while (i < height)
	{
		twoDimArray[i] = malloc(sizeof(int) * width);
		if (twoDimArray[i] == NULL)
		{
			free(twoDimArray);
			return (NULL);
			j = 0;
			while (j < width)
			{
				free(twoDimArray[j]);
				j++;
			}
		}
		i++;
	}

	i = 0;
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
	return (twoDimArray);
}

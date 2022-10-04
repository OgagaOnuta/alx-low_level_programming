#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with specific char
 * @size: Size of array
 * @c: Character to be initialized
 *
 * Return: Pointer to array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *charArray = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (charArray == NULL || size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		charArray[i] = c;
		i++;
	}
	return (charArray);
}

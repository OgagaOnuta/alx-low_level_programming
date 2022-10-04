#include <stdlib.h>

/**
 * _strdup - Copy string to new memory space
 * @str: String to be copied
 *
 * Return: Pointer to string if success, NULL if fail.
 */

char *_strdup(char *str)
{
	char *copyString = malloc(sizeof(*str));
	unsigned int i = 0;

	if (copyString == NULL || str == NULL)
	{
		return (NULL);
	}
	while (i < sizeof(str))
	{
		copyString[i] = str[i];
		i++;
	}
	return (copyString);
}

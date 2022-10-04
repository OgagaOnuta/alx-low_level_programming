#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Copy string to new memory space
 * @str: String to be copied
 *
 * Return: Pointer to string if success, NULL if fail.
 */

char *_strdup(char *str)
{
	char *copyString = malloc(sizeof(char) * strlen(str));
	unsigned int i = 0;

	if (copyString == NULL || str == NULL)
	{
		return (NULL);
	}

	while (i < strlen(str))
	{
		copyString[i] = str[i];
		i++;
	}
	return (copyString);
}

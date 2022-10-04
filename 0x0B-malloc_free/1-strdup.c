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
	char *copyString;
	unsigned int i = 0, len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	copyString = malloc(sizeof(char) * (len + 1));

	if (copyString == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		copyString[i] = str[i];
		i++;
	}
	return (copyString);
}

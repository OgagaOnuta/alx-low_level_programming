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
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	copyString = (char *) malloc(sizeof(char) * (strlen(str) + 1));

	if (copyString == NULL)
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

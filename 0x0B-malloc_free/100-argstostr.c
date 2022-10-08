#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of a program separated by a new line.
 * @ac: Argument count
 * @av: Argument vector (array)
 *
 * Return: Pointer to new string on success, NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	char *conString;
	int i = 0;
	unsigned int j, len = 0;

	while (i < ac)
	{
		len += strlen(av[i]);
		i++;
	}

	conString = malloc(sizeof(char *) * len);
	if (conString == NULL || ac == 0 || av == NULL)
	{
		return (NULL);
	}

	i = 0, len = 0;
	while (i < ac)
	{
		len = strlen(av[i]);
		j = 0;
		while (j < len)
		{
			_putchar(av[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (conString);
}

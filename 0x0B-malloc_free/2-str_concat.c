#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatString;
	unsigned int i = 0, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	concatString = (char *) malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (concatString == NULL)
	{
		return (NULL);
	}

	while (i < (strlen(s1) + strlen(s2)))
	{
		j = 0;
		while (j < (strlen(s1) + strlen(s2)))
		{
			if (i < strlen(s1))
			{
				concatString[i] = s1[i];
			}
			else if (j < strlen(s2))
			{
				concatString[j + strlen(s1)] = s2[j];
			}
			j++;
		}
		i++;
	}
	return (concatString);
}

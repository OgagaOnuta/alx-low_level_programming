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
	unsigned int i = 0, j, len1 = strlen(s1), len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	concatString = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concatString == NULL)
	{
		return (NULL);
	}

	while (i < (len1 + len2))
	{
		j = 0;
		while (j < (len1 + len2))
		{
			if (i < len1)
			{
				concatString[i] = s1[i];
			}
			else if (j < len2)
			{
				concatString[j + len1] = s2[j];
			}
			j++;
		}
		i++;
	}
	return (concatString);
}

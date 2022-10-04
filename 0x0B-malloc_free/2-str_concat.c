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

	concatString = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 2));
	if (concatString == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	while (i < (strlen(s1) + strlen(s2) - 1))
	{
		j = strlen(s1);
		while (j <= (strlen(s1) + strlen(s2) - 1))
		{
			if (i < strlen(s1))
			{
				concatString[i] = s1[i];
			}
			else if (j)
			{
				concatString[j] = s2[j - strlen(s1)];
			}
			j++;
		}
		i++;
	}
	return (concatString);
}

#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to be concatenated from second string
 *
 * Return: Pointer to concatenated string on success, NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatnString;
	unsigned int i = 0, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1), len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}

	concatnString = malloc(sizeof(char) * (len1 + n + 1));
	if (concatnString == NULL)
	{
		return (NULL);
	}
	while (i < (len1 + n + 1))
	{
		j = 0;
		while (j < (len1 + n + 1))
		{
			if (i < len1)
			{
				concatnString[i] = s1[i];
			}
			else if (j < n)
			{
				concatnString[j + len1] = s2[j];
			}
			else
			{
				concatnString[len1 + n] = s2[len2];
			}
			j++;
		}
		i++;
	}
	return (concatnString);
}

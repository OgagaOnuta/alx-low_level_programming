/**
 * cap_string - Capitalizes all words of a string
 * @s: String to be capitalized
 *
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i = 0, j;
	char separator[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if (s[i] == separator[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
			j++;
		}
		i++;
	}
	return (s);
}

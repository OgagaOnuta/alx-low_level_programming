#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int k = strlen(s);
	char s1, s2;

	while (i < (k / 2))
	{
		s1 = s[i], s2 = s[k - i - 1];
		s[i] = s2, s[k - i - 1] = s1;
		i++;
	}
}

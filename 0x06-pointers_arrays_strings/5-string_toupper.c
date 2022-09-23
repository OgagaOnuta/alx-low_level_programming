#include "main.h"
/* #include <ctype.h> */

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: String
 *
 * Return: Uppercase string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);

/*
* unsigned char *c = (unsigned char *)s;
*
* while (*c)
* {
* *c = toupper(*c);
* c++;
* }
* return (s);
*/
}

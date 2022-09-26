#include <string.h>

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to be located
 *
 * Return: Pointer to the first occurrence of the character,
 * NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	char *_char = strchr(s, c);

	return (_char);
}

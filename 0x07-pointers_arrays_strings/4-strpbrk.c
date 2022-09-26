#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: String being checked for
 *
 * Return: Pointer to byte in s that matches one of the
 * bytes in accept, NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *_string = strpbrk(s, accept);

	return (_string);
}

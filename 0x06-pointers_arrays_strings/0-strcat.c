#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: String to be appended to
 * @src: String to be appended
 *
 * Return: The concatenated string
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}

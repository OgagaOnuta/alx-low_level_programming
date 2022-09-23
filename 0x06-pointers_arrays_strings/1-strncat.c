#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @dest: String to be appended to
 * @src: String to be appended
 * @n: Number of bytes to be concatenated from @src
 *
 * Return: The concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}

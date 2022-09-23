#include <string.h>

/**
 * _strncpy - Copies a string
 * @dest: String to be copied to
 * @src: String to be copied
 * @n: Not more than n bytes shall be copied
 *
 * Return: Copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	dest = strncpy(dest, src, n);
	return (dest);
}

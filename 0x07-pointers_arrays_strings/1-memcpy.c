#include <string.h>

/**
 * _memcpy - Copies memory area
 * @dest: Memory area to be copied to
 * @src: Memory area to be copied from
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **_string = memcpy(dest, src, n);

	return (*_string);
}

#include <string.h>

/**
 * _memset - Fills memory with a constant byte
 * @s: String
 * @b: Constant byte
 * @n: Number of bytes
 *
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char **_string = memset(s, b, n);

	return (*_string);
}

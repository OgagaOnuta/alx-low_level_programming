#include <string.h>
#include "main.h"

/**
 * _strcpy - Copies string to string
 * @dest: String to be copied to
 * @src: String to be copied
 *
 * Return: new string
 */

char *_strcpy(char *dest, char *src)
{
	char *copied = strcpy(dest, src);

	return (copied);
}

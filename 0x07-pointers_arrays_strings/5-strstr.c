#include <string.h>

/**
 * _strstr - Locates a substring
 * @haystack: String being searched
 * @needle: String being checked for
 *
 * Return: Pointer to the beginning of the located substring,
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *_string = strstr(haystack, needle);

	return (_string);
}

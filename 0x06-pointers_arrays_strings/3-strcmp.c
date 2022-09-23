#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: String to be compared
 * @s2: String to be compared
 *
 * Return: 0 if equal, -ve if s1 < s2, +ve if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int ret = strcmp(s1, s2);

	return (ret);
}

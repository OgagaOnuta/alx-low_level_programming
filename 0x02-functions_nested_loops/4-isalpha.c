#include <ctype.h>

/**
 * _isalpha - Checks for alphabetic character
 * @c: argument to be checked
 *
 * Return: 1 if passed, 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

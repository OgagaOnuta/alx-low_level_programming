#include <ctype.h>

/**
 * _isupper - Checks for uppercase character
 * @c: Argument to be checked
 *
 * Return: 1 if success, 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

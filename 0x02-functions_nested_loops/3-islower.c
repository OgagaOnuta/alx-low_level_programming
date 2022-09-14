#include <ctype.h>

/**
 * _islower - Checks for lowercase character
 * @c: argument to be checked
 *
 * Return: 1 if passed, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

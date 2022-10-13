#include <stdarg.h>

/**
 * sum_them_all - Sum all parameters
 * @n: Maximum number of variable arguments
 *
 * Return: Sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argPtr;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(argPtr, n);

	while (i < n)
	{
		sum += va_arg(argPtr, int);
		i++;
	}
	va_end(argPtr);

	return (sum);
}

#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a separator
 * @separator: Separator between numbers
 * @n: Maximum number of variable arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argPtr;
	unsigned int i = 0;

	va_start(argPtr, n);

	while (i < n)
	{
		if (separator == NULL)
			printf("%d", va_arg(argPtr, int));
		else
		{
			printf("%d", va_arg(argPtr, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(argPtr);
}

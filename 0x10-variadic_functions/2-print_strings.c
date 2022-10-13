#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings separated by a separator
 * @separator: Separator between strings
 * @n: Maximnum number of variable arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argPtr;
	unsigned int i = 0;
	char *b;

	va_start(argPtr, n);

	while (i < n)
	{
		b = va_arg(argPtr, char *);
		if (b == NULL)
			b = "(nil)";

		if (separator == NULL)
			printf("%s", b);
		else
		{
			printf("%s", b);
			if (i != (n - 1))
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(argPtr);
}

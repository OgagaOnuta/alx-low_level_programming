#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: List of types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list argPtr;
	char *s;
	int j = 0, len = 0;

	va_start(argPtr, format);
	while (format[len])
		len++;
	while (format[j] && format)
	{
		switch (format[j])
		{
		case 'c':
			printf("%c", (char) va_arg(argPtr, int));
			break;
		case 'i':
			printf("%i", va_arg(argPtr, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(argPtr, double));
			break;
		case 's':
			s = va_arg(argPtr, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			j++;
			continue;
		}
		if (j < (len - 1))
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(argPtr);
}

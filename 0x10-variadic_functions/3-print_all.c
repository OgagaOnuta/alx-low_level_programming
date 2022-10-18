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
	char *separator = "";
	char *s;
	int j = 0;

	va_start(argPtr, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
			case 'c':
				printf("%s%c", separator, (char) va_arg(argPtr, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(argPtr, int));
				break;
			case 'f':
				printf("%s%f", separator, (float) va_arg(argPtr, double));
				break;
			case 's':
				s = va_arg(argPtr, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				j++;
				continue;
			}
			separator = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(argPtr);
}

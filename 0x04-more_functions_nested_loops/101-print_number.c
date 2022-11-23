#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer
 *
 * Return: void
 */

void print_number(int n)
{
	int w, x, y, z;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	w = n / 1000;
	x = (n / 100) % 10;
	y = (n / 10) % 10;
	z = n % 10;
	if (n < 10)
		_putchar(n + '0');
	else if (n > 10 && n < 100)
	{
		_putchar(y + '0');
		_putchar(z + '0');
	}
	else if (n > 100 && n < 1000)
	{
		_putchar(x + '0');
		_putchar(y + '0');
		_putchar(z + '0');
	}
	else if (n > 1000 && n < 10000)
	{
		_putchar(w + '0');
		_putchar(x + '0');
		_putchar(y + '0');
		_putchar(z + '0');
	}
}

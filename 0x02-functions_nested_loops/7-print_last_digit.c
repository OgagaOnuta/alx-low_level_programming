#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - Print last digit of number
 * @D: Number to be evaluated
 *
 * Return: lastD which is the last digit of the number
 */

int print_last_digit(int D)
{
	int lastD = _abs(D % 10);

	_putchar(lastD + '0');
	return (lastD);
}

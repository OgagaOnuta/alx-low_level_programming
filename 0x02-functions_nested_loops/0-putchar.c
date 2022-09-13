#include <unistd.h>

/**
 * main - Entry point
 * @void: No argument
 *
 * Return: 0
 */

int main(void)
{
	char _putchar[] = "_putchar\n";

	write(1, &_putchar, sizeof(_putchar));
	return (0);
}

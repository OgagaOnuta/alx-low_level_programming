#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * @void: No argument
 *
 * Return: 1
 */

int main(void)
{
	char z[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, &z, (sizeof(z) - 1));
	return (1);
}

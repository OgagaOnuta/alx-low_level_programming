#include <stdio.h>

/**
 * before_main - To be executed before the main function
 *
 * Return: void
 */

__attribute__((constructor)) void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print a struct dog
 * @d: Pointer of type struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_FAILURE);

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees dogs
 * @d: Pointer of type struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}

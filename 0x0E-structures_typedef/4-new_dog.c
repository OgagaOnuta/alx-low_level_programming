#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Pointer to struct dog on success, NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogptr = malloc(sizeof(dog_t));

	if (dogptr == NULL)
		return (NULL);

	dogptr->name = name;
	dogptr->age = age;
	dogptr->owner = owner;

	return (dogptr);
}

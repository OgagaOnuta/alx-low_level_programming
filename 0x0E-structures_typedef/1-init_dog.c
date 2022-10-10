#include <stdlib.h>
#include "dog.h"

#define name name
#define age age
#define owner owner

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer of type struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog mastiff;

	mastiff.name = name;
	mastiff.age = age;
	mastiff.owner = owner;
	*d = mastiff;
}

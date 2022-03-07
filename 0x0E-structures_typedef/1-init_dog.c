#include <stdio>
#include "dog.h"

/**
 * init_dog - Initialize variable of type structure dog
 * @d: The dog to be initialized
 * @name: The name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

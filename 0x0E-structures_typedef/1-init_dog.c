#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to structure
 * @name: Name of the dog.
 * @age: How old the dog is.
 * @owner: Title of the person that owns the dog.
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

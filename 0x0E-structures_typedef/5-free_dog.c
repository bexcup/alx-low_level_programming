#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees the dogs
 * @d: pointer to the dog to free
 *
 * Return: vpod
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

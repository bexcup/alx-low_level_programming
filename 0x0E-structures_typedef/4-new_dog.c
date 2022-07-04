#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: How old the dog is.
 * @owner: Title of the person that owns the dog.
 *
 * Return: If fails - NULL
 * Else - pointer of a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nameLen, ownerLen, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;

	while (owner[ownerLen++])
		;

	dog->name = malloc(nameLen * sizeof(dog->name));

	if(dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	
	for (i = 0; i <= nameLen; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(ownerLen * sizeof(dog>owner));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - creates an array of chars
 * @str: the characters of the array
 *
 * Return: void
 */
char *_strdup(char *str)
{
	char *arraycpy;
	unsigned int counter;
	unsigned int limiter;

	if (str == NULL)
	{
		return (NULL);
	}

	for (counter = 0; str[counter] != '\0'; counter++)
	{}
	counter++;
	arraycpy = malloc(counter * sizeof(char));

	if (arraycpy == NULL)
	{
		return (NULL);
	}

	limiter = counter;

	for (counter = 0; counter < limiter; counter++)
	{
		*(arraycpy + counter) = *(str + counter);
	}

	return (arraycpy);
}

/**
 * new_dog - creates the new dog
 * @name: dog's name
 * @age: how old the dog is
 * @owner: name of the dog's owner
 * Return: the new dog memory location
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	char *og_name;
	char *fut_owner;

	og_name = _strdup(name);
	fut_owner = _strdup(owner);

	if (og_name == NULL || fut_owner == NULL)
	{
		free(og_name);
		free(fut_owner);
		return (NULL);
	}

	doggie = malloc(sizeof(dog_t));

	if (doggie == NULL)
	{
		free(og_name);
		free(fut_owner);
		return (NULL);
	}

	doggie->name = og_name;
	doggie->age = age;
	doggie->owner = fut_owner;

	return (doggie);
}

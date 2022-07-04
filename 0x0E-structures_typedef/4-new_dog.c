#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * len - find length of string
 * @str: string
 *
 * Return: The length of the string
 */
int len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;

	return (i);
}

/**
 * strcpy - copies the string pointed to by src that also
 * includes the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 *
 * Return: copy of original source
 */
char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - create new instance of struct dog
 * @name: The name of the dog
 * @age: How old the dog is
 * @owner: The name of the person the dog belongs to
 *
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	char *copy_of_name;
	char *copy_of_owner;

	doggie = malloc(sizeof(dog_t));

	if (doggie == NULL)
		return (NULL);
	doggie->age = age;

	if (name != NULL)
	{
		copy_of_name = malloc(len(name) + 1);

		if (copy_of_name == NULL)
		{
			free(doggie);
			return (NULL);
		}
		doggie->name = strcpy(copy_of_name, name);
	}
	else
		doggie->name = NULL;

	if (owner != NULL)
	{
		copy_of_owner = malloc(len(owner) + 1);

		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(doggie);
			return (NULL);
		}
		doggie->owner = strcpy(copy_of_owner, owner);
	}
	else
		doggie->owner = NULL;

	return (doggie);
}

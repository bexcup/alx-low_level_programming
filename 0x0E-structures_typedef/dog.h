#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Desc: A header file that defines a new type struct dog.
 */

/**
 * struct dog - A new type that describes a dog.
 * @name: Name of the dog.
 * @age: How old the dog is.
 * @owner: Title of the person that owns the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typdef is new name for the type struct dog.
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

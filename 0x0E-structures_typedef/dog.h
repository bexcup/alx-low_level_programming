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

#endif

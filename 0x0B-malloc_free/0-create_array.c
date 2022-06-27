#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: If size == 0 or fails then NULL,
 * Otherwise a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}

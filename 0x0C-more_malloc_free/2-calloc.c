#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memmory for an array, given number of elements and size
 * @nmemb: no. of elements
 * @size: size of elements
 *
 * Return: If error - NULL,
 * Otherwise return char pointer to newly allocated place in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}

#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination of the memory area
 * @src: memory area that is copied
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies the string given as a parameter
 * @str: string that is duplicated
 *
 * Return: If the str == NULL or insufficent memory avail then NULL,
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i] != '\0'))
			i++;

	return (dup);
}

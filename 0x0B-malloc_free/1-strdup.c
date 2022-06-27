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
	char *strDup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
}

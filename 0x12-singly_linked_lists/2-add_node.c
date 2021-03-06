#include "lists.h"
/**
 * _strlen - Find the length of the string.
 * @str: The string that is assessed.
 * Return: Length of the string.
 */
int _strlen(const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	return (length);
}

/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: A double pointer.
 * @str: New string to add in the node.
 * Return: The address of the new element, or NULL if it failed
 * str needs to be duplicated.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	if (strdup(str) == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);

	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	*head = new;

	return (new);
}

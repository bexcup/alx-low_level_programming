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
 * add_node_end - Adds a new node at the end of a list.
 * @head: The head of the linked list.
 * @str: New string to store in the list.
 * Return: The address of the new element, or NULL if it failed
 * str needs to be duplicated.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;
	char *copy;

	new = malloc(sizeof(list_t));
	tail = *head;
	copy = strdup(str);

	if (new == NULL || copy == NULL)
	{
		free(new);
		free(copy);
		return (NULL);
	}

	new->str = copy;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new;

	return (new);
}

#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head pointer for the linked list.
 * @n: The data that is added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *add;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		add = *head;

		while (add->next != NULL)
			add = add->next;

		add->next = new;
	}

	return (new);
}

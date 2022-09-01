#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: Pointer to the pointer of the head of a doubly linked list
 * @n: The element for the new node
 *
 * Return: Either NULL or the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}

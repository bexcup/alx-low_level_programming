#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the head's pointer.
 * @idx: The index of the list.
 * @n: The integer in the new node.
 * Return: If it failed - NULL.
 *         Otherwise - The address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (free(new), NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
		return (free(new), NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
			return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;

		if (tmp == NULL && idx > i)
			return (free(new), NULL);
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}

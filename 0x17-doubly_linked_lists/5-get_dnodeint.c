#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to doubly linked list head
 * @index: The nth node number
 * Return: The node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	i = 0;
	if (head == NULL)
		return (NULL);
	node = head;
	while (i < index)
	{
		node = node->next;
		i++;
		if (node == NULL)
			return (NULL);
	}

	return (node);
}

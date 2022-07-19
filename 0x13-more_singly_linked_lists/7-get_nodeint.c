#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: The head of the list.
 * @index: The index of the node.
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index && head != NULL; node++)
		head = head->next;

	return (head);
}

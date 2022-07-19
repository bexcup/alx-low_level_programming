#include "lists.h"

listint_t **_reallocate(listint_t **list, size_t size, listint_t *new);

/**
 * _reallocate - Reallocates memory for an array of pointers
 *         to the nodes in a linked list.
 * @list: The old list
 * @size: The size of the new list.
 * @new: The new node added to the list.
 * Return: Pointer to the new list.
 */
listint_t **_reallocate(listint_t **list, size_t size, listint_t *new)
{
	size_t i;
	listint_t **new_list;

	new_list = malloc(size * sizeof(listint_t *));

	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		new_list[i] = list[i];

	new_list[i] = new;
	free(list);

	return (new_list);
}

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @head: The pointer to the head’s pointer.
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t nodes;
	size_t i;
	listint_t **list = NULL;
	listint_t *next;

	nodes = 0;

	if (head == NULL || *head == NULL)
		return (nodes);
	while (*head != NULL)
	{
		for (i = 0; i < nodes; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (nodes);
			}
		}
		nodes++;
		list = _reallocate(list, nodes, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (nodes);
}

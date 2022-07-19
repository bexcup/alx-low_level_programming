#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at index,
 *                           index of a listint_t linked list.
 * @head: The pointer to the head's pointer.
 * @index: The index of the list.
 * Return: If failed - -1.
 *         Otherwise if success - 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *delete;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
			return (1);
	}

	else
		for (i = 0; tmp != NULL; i++)
		{
			if (i == index - 1)
			{
				delete = tmp;
				delete = delete->next;
				tmp->next = delete->next;
				free(delete);

				return (1);
			}

			tmp = tmp->next;
		}

	return (-1);
}

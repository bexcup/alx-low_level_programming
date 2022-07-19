#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n).
 * @head: Pointer to the head's pointer.
 * Return: If the linked list is empty (0).
 */
int pop_listint(listint_t **head)
{
	int ret;
	listint_t *tmp;

	if (*head != NULL)
	{
		tmp = *head;
		ret = tmp->n;
		*head = tmp->next;
		free(tmp);

		return (ret);
	}
	else
		return (0);
}

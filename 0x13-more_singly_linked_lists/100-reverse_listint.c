#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the head's pointer.
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *inversed;
	listint_t *og = *head;

	if (*head == NULL)
		return (NULL);

	while (og->next != NULL)
	{
		inversed = og->next;
		og->next = inversed->next;
		inversed->next = *head;
		*head = inversed;
	}

	return (*head);
}

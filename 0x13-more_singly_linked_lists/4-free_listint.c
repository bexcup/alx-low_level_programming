#include "lists.h"
/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}

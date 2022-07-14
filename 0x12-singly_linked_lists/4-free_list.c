#include "lists.h"
/**
 * free_list - Free a list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *pointer;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		pointer = head;
		head = head->next;
		free(pointer->str);
		free(pointer);
	}
}

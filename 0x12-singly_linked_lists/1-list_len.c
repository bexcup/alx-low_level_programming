#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list.
 * @h: The struct lists.
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

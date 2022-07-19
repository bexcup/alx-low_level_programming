#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *copy = head;
	const listint_t *new;

	size_t counter = 0;
	size_t i;


	while (copy)
	{
		printf("[%p] %d\n", (void *)copy, copy->n);

		counter++;
		copy = copy->next;
		new = head;
		i = 0;

		while (i < counter)
		{
			if (new != copy)
			{
				new = new->next;
				i++;
			}
			else
			{
				printf("-> [%p] %d\n", (void *)new, new->n);
				return (counter);
			}
		}
	}
	return (counter);
}


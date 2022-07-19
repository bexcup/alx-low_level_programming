#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head.
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;

	hare = tortoise = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (hare == tortoise)
		{
			tortoise = head;
			break;
		}
	}
	if (!tortoise || !hare || !hare->next)
		return (NULL);
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}

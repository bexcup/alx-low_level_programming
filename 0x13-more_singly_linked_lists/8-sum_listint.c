#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of
 *               a listint_t linked list.
 * @head: The pointer to the head of the list.
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int ret = 0;

	while (head)
	{
		if (head->n)
			ret += head->n;
		head = head->next;
	}

	return (ret);
}

#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a
 *                dlistint_t linked list
 * @head: Pointer to start of list
 * Return: Sum of all data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}

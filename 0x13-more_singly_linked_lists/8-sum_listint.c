#include "lists.h"
/**
 *sum_listint - returns the sum of all data in the list
 *
 * @head: pointer to the first node in list
 *
 * Return: Sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;

	if (!head)
	{
		return (0);
	}

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

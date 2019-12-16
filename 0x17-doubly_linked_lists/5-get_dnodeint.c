#include "lists.h"
/**
 * get_dnodeint_at_index - returns specified node
 * @head: pointer to head of the LL
 * @index: position of the required node
 *
 * Return: Specified node is returned
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i += 1;
	}

	return (NULL);
}

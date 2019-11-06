#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a list
 *
 * @head: pointer to the first node in list
 * @index: index of the node of which is to be returned
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (!head)
		return (0);
	for (x = 0; head; x++)
	{
		if (x == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}

#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at a specific index
 *
 *@head: pointer to the first node in the list
 *@index: Index where the node should be deleted
 *
 * Return: Returns 1 if success, -1  otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *n;

	unsigned int i;

	if (!*head)
		return (-1);
	n = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(n);
		return (1);
	}

	for (i = 0; i < index - 1; i++, n = n->next)
	{
		if (n == NULL)
			return (-1);
	}
	temp = n->next->next;
	free(n->next);
	n->next = temp;
	return (1);
}


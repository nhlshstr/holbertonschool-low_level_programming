#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: Head of the DLL
 * @index: Where I should delete the node
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodeDel;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	nodeDel = *head;
	if (index == 0)
	{
		if (nodeDel->next == NULL)
		{
			*head = NULL;
			free(nodeDel);
			return (1);
		}
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(nodeDel);
		return (1);
	}
	for (i = 0; nodeDel != NULL; i++, nodeDel = nodeDel->next)
	{
		if (i == index)
		{
			nodeDel->prev->next = nodeDel->next;
			if (nodeDel->next != NULL)
				nodeDel->next->prev = nodeDel->prev;
			free(nodeDel);
			return (1);
		}
	}
	return (-1);
}

#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a ndoe at index
 *
 * @h: double pointer to the head of the DLL
 * @idx: Index at which the node is to be inserted
 * @n: Number to be added to the node
 *
 * Return: New node that is added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *node;
	unsigned int no = 0;

	if (h == NULL)
		return (NULL);
	node = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (0);
	}
	for (no = 0; no < idx - 1; no++)
	{
		if (node == NULL)
		{
			free(newnode);
			return (NULL);
		}
		if (no - 1 == idx)
		{
			newnode->next = node->next;
			node->next = newnode;
			newnode->prev = node;
			return (newnode);
		}
		node = node->next;
	}
	newnode->next = node->next;
	node->next = newnode;
	return (newnode);
}

#include "lists.h"
/**
 *insert_nodeint_at_index - inserts node at specific index
 *
 * @head: pointer to the first node
 * @idx: Index at which node is to be inserted
 * @n: int data to be added to the node
 *
 * Return: Returns pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int current = 0;
	listint_t *newNode, *node;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	if (!*head)
	{
		if (idx == 0)
		{
			newNode->next = NULL;
			*head = newNode;
			return (newNode);
		}

		free(newNode);

		return (NULL);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (node = *head; node != NULL; node = node->next)
	{
		if (current == idx - 1)
		{
			newNode->next = node->next;
			node->next = newNode;
			return (newNode);
		}
		current++;
	}
	return (NULL);
}

#include "lists.h"
/**
 *add_nodeint - adds a node at the beginning of the list
 *
 *@head: pointer to the first node in the list
 *@n: number of nodes in the list
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}

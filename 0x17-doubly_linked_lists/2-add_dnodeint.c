#include "lists.h"
/**
 * add_dnodeint - adds a node to beginning of DLL
 * @head: Double pointer to head of list
 * @n: Number value held in node
 *
 * Return: Returns address of added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (node->next != NULL)
	{
		node->next->prev = node;
	}

	*head = node;
	return (node);
}

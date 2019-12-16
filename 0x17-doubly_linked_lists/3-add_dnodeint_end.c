#include "lists.h"
/**
 * add_dnodeint_end - adds node to end of the list
 * @head: Head node of DLL
 * @n: Numeric value held in node
 *
 * Return: New node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *help = *head;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	while (help->next)
	{
		help = help->next;
	}

	help->next = node;
	node->prev = help;

	return (node);

}

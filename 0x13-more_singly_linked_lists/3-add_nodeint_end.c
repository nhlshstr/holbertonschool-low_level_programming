#include "lists.h"
/**
 *add_nodeint_end - adds a node to the end of the list
 *
 *@head: Pointer to the first node in the list
 *@n: Int to be stored in new node
 *Return: Returns pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->next = NULL;
	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = node;

	return (node);
}

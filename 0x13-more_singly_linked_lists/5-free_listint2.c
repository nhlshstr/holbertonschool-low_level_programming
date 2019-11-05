#include "lists.h"
/**
 *free_listint2 - frees the linked list
 *
 * @head: pointer to first node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}

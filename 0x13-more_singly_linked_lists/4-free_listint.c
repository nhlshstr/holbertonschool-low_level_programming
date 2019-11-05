#include "lists.h"
/**
 *free_listint - frees the linked list
 *
 * @head: pointer to first node in the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

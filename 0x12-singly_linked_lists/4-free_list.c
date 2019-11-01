#include "lists.h"
/**
 *free_list - frees the LL iteratively
 *
 * @head: pointer to the first node in the head
 *
 * Return: No return type
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

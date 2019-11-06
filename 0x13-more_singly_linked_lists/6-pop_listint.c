#include "lists.h"
/**
 *pop_listint - function to pop the head node
 *
 * @head: pointer to the first node in the list
 *
 * Return: Value of the first node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value;

	if (!*head)
		return (0);

	tmp = *head;
	*head = tmp->next;
	value = tmp->n;
	free(tmp);

	return (value);
}

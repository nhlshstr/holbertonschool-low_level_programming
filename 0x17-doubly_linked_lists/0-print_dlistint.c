#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to head
 * Return: The number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}

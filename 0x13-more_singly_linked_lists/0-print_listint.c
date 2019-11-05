#include "lists.h"
/**
 *print_listint - prints the elements of a list
 *
 * @h: Pointer to the first node
 *
 * Return: Returns the length of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t length = 0;
	const listint_t *a1 = h;

	while (a1 != NULL)
	{
		printf("%d\n", a1->n);
		length++;
		a1 = a1->next;
	}

	return (length);
}


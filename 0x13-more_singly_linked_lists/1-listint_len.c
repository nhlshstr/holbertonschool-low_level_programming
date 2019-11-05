#include "lists.h"
/**
 *listint_len - Returns the length of the list
 *
 * @h: pointer to the first node of the file
 *
 * Return: Returns the length of the file
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;
	const listint_t *x1 = h;

	while (x1 != NULL)
	{
		length++;
		x1 = x1->next;
	}

	return (length);
}

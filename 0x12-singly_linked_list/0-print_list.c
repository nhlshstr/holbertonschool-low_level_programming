#include "lists.h"
/**
 *print_list - prints the contents of the LL
 *
 * @h: Pointer to the LL (first element)
 *
 * Return: Returns the length of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;
	const list_t *node;

	node = h;

	while (node != NULL)
	{
		if (node->str != NULL)
		{
			printf("[%d] %s\n", node->len, node->str);
		}

		else
			printf("[0] (nil)\n");
		length++;
		node = node->next;
	}

	return (length);
}

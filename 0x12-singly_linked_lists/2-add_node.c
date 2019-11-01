#include "lists.h"
/**
 * add_node - Adds a node to the beginning of LL
 * @head: Pointer to a pointer to first item
 * @str: Pointer to the string
 *
 * Return: Pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t length = 0;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	else if (str == NULL)
	{
		newNode->len = 0;
		newNode->str = NULL;
	}

	else
	{
		for (; str[length]; length++)
			;
		newNode->len = length;

		newNode->str = strdup(str);
		if (newNode->str == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

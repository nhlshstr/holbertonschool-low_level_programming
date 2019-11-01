#include "lists.h"
/**
 * add_node_end - Adds a node to the beginning of LL
 * @head: Pointer to a pointer to first item
 * @str: Pointer to the string
 *
 * Return: Pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t length = 0;
	list_t *newNode;
	list_t *temp = *head;

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
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}

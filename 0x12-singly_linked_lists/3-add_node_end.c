#include "lists.h"
#include <stdlib.h>
#include <string.h>

unsigned int _strlen(const char *str);

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to list_t pointer
 * @str: String data of new node
 *
 * Return: Address of new element on success, NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;

	/* Create new node with given data */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL; /* Point new node to NULL because it'll be the last node */

	if (*head == NULL)
	{
		*head = new; /* Make new node head node */
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next; /* Find last node */
		}
		tail->next = new; /* Point last node to new node */
	}

	return (new);
}

/**
 * _strlen - Calculates length of string
 * @str: String
 *
 * Return: Length of string
 */

unsigned int _strlen(const char *str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

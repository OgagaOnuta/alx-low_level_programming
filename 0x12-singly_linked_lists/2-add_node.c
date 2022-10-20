#include "lists.h"
#include <stdlib.h>
#include <string.h>

unsigned int _strlen(const char *str);

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to list_t pointer
 * @str: String data of new node
 *
 * Return: Address of new element on success, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	/* Create new node with given data */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head; /* Point new node to head node */
	*head = new; /* Make new node head node */

	return (new);
}

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

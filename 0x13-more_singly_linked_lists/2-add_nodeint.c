#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to listint_t pointer
 * @n: Integer data of new node
 *
 * Return: Address of new element on success, NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Create new node */
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head; /* Point new node to head node */
	*head = new; /* Make new node head node */

	return (new);
}

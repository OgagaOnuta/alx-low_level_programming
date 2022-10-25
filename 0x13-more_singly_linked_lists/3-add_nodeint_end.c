#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to listint_t pointer
 * @n: Integer data of new node
 *
 * Return: Address of new element on success, NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Create new node */
	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL; /* Point new node to NULL because it'll be the last node */

	/* If head node is NULL, make new node head node */
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		/* Find last node */
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new; /* Point last node to new node */
	}

	return (new);
}

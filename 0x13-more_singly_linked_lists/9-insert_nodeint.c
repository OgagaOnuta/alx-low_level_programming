#include "lists.h"
#include <stdlib.h>

size_t lenlist(listint_t *h);

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to listint_t pointer
 * @idx: Index of the list where new node should be added
 * @n: Integer data of new node
 *
 * Return: Address of new node on success, NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int len;

	len = lenlist(*head);
	if (len >= idx)
	{
		unsigned int x;

		/* Create new node */
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;

		/* Locate the node before the given index */		
		current = *head;
		x = 0;
		while (x < (idx - 1))
		{
			current = current->next;
			x++;
		}
		new->next = current->next; /* Point new node to next node */
		current->next = new; /* Point located node to new node */
	}
	else
	{
		return (NULL);
	}

	return (new);
}

/**
 * lenlist - Returns the number of elements in a linked listint_t list
 * @h: Pointer to listint_t
 *
 * Return: Number of elements
 */

size_t lenlist(listint_t *h)
{
	unsigned int numElem;

	numElem = 0;
	while (h != NULL)
	{
		h = h->next;
		numElem++;
	}

	return (numElem);
}

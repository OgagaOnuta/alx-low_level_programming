#include "lists.h"
#include <stdlib.h>

size_t lenlist(listint_t *h);

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked list
 * @head: Pointer to listint_t pointer
 * @index: Index of the list where node should be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleteNode;
	unsigned int len;

	len = lenlist(*head);
	if (len >= index)
	{
		unsigned int x;

		/* Locate node before index */
		deleteNode = *head;
		x = 0;
		while (x < index)
		{
			deleteNode = deleteNode->next;
			x++;
		}
		deleteNode->next = deleteNode->next->next; /* Point located node to next two nodes */
		/* free(deleteNode); */
	}
	else
	{
		return (-1);
	}

	return (1);
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

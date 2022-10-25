#include "lists.h"
#include <stdlib.h>

size_t lenlist(listint_t *h);

/**
 * delete_nodeint_at_index - Deletes node at index of a listint_t linked list
 * @head: Pointer to listint_t pointer
 * @index: Index of the list where node should be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleteNode, *tmp;
	unsigned int x, len;

	len = lenlist(*head);
	if (*head == NULL || len < index)
	{
		return (-1);
	}

	deleteNode = *head; /* Store head node somewhere temporarily */
	x = 0;
	if (index == 0) /* If index is at 0, then it's the head node */
	{
		*head = (*head)->next; /* Move head node to the next node */
		free(deleteNode); /* Free head node */
	}
	else
	{
		/* Locate node before index */
		while (x < (index - 1))
		{
			deleteNode = deleteNode->next;
			x++;
		}
		tmp = deleteNode->next; /* Store located node somewhere temporarily */
		deleteNode->next = deleteNode->next->next; /* Point node to next two nodes */
		free(tmp); /* Free temporary node */
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

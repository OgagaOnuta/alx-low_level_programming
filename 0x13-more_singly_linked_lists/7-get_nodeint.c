#include "lists.h"

size_t lenlist(listint_t *h);

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t linked list
 * @head: Pointer to listint_t
 * @index: Index of the node
 *
 * Return: nth node on success, NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len;

	len = lenlist(head);
	if (len >= index)
	{
		unsigned int n;

		n = 0;
		while (n < index)
		{
			head = head->next;
			n++;
		}
	}
	else
	{
		return (NULL);
	}

	return (head);
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

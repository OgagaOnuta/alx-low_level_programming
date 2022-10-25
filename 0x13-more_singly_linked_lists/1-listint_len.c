#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: Pointer to listint_t
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
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

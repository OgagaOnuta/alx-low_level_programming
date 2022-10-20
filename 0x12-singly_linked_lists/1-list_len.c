#include "lists.h"

/**
 * list_len - Returns number of elements in a linked list_t list
 * @h: Pointer to type list_t
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
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

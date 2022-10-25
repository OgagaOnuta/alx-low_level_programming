#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to listint_t
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	if (h)
	{
		unsigned int numNode;

		numNode = 0;
		while (h != NULL)
		{
			printf("%i\n", h->n);
			h = h->next;
			numNode++;
		}
	}

	return (numNode);
}

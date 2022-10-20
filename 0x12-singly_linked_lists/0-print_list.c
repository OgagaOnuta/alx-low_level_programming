#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer of type list_t
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int numNode;

	numNode = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		numNode++;
	}

	return (numNode);
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to listint_t
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head; /* Store head somewhere temporarily */
		head = head->next; /* Move head */
		free(tmp); /* Free temporary node */
	}
}

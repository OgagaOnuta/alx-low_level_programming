#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: Pointer of type list_t
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head; /* Store head somewhere temporarily */
		head = head->next; /* Move head */
		free(tmp->str); /* Free temporary node string */
		free(tmp); /* Free temporary node */
	}
}

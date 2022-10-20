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
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

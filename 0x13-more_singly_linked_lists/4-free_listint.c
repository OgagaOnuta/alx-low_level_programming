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
	if (head)
	{
		while (head != NULL)
		{
			free(head);
			head = head->next;
		}
		free(head);
	}
}

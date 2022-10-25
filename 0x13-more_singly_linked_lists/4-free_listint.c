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
	listint_t *move;

	while (head != NULL)
	{
		move = head;
		head = head->next;
		free(move);
	}
}

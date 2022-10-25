#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to listint_t pointer
 *
 * Return: head node's data, 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;

	/* If linked list is empty, return 0 */
	if ((*head)->next == NULL)
	{
		return (0);
	}

	pop = *head; /* Store head node in a new node */
	*head = pop->next; /* Make next node head node */
	free(pop);

	return ((*head)->n);
}

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
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		pop = malloc(sizeof(listint_t));
		if (pop == NULL)
		{
			free(pop);
		}
		pop = *head; /* Store head node in a new node */
		*head = (*head)->next; /* Make next node head node */
		free(pop); /* Free deleted node */
	}

	return (pop->n);
}

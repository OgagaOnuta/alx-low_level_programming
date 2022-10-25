#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets head node to NULL
 * @head: Pointer to listint_t pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head; /* Store head somewhere temporarily */
		*head = (*head)->next; /* Move head */
		free(tmp); /* Free temporary node */
	}
	*head = NULL; /* Set head node to NULL */
}

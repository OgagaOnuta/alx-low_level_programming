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
	listint_t *tmp1;
	listint_t *tmp2;

	tmp1 = *head;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = tmp2;
	}
	*head = NULL;
}

#include "lists.h"

/**
 * sum_listint - Sums all the data of a listint_t linked list
 * @head: Pointer to listint_t
 *
 * Return: Sum if list, 0 if empty list
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head)
	{
		sum = 0;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	else
	{
		return (0);
	}

	return (sum);
}

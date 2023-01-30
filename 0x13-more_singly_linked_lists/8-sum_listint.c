#include "lists.h"

/**
 * sum_listint - calculates the sum of all data
 * @head: A pointer to the head
 *
 * Return: if the list is empty 0
 * or- the sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node
 * @head: apointer to the head
 * @index: the index starts at 0
 *
 * Return: if the node does not exist NULL
 * or - the locadted node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node <  index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

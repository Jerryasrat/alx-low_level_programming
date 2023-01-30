#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: a pointer to the address of the head
 * @n: the integer for the new node to contain
 *
 * Return: if the function fails NULL
 * or the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint list
 * @head: head of the list
 * @n: value to be added to list
 *
 * Return: Address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}

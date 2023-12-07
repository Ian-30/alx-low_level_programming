#include "lists.h"

/**
 * free_dlistint -Free a dlistint_t list
 * @head: pointer to pointer of head of list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

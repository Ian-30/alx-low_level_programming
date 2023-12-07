#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a d_listint_t list
 * @head: pointer to pointer of head of the list
 * @index: the nth index
 *
 * Return: Node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

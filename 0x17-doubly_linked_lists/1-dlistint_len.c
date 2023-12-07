#include "lists.h"

/**
 * dlistint_len - Return number of elements in a linked d_listint_t
 * @h: head of the list
 *
 * Return: Number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

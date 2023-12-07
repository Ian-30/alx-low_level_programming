#include "lists.h"

/**
 * print_dlistint - Print all the elements of a dlistint_t list
 * @h: Pointer to head node of  linked list
 *
 * Return: Number of nodes on the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;

	}
	return (i);
}

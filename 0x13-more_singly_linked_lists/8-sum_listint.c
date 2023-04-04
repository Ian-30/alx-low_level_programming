#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data of a listintit linked list
 * @head: Pointer to the first node in the list
 *
 * Return: Sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

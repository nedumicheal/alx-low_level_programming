#include "lists.h"

/**
 * print_listint - prints all the elements of list
 * @h: the linked list of type listint_t
 * @next: points to the next node
 * Return: number of all nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t abd = 0;

	while (h)
	{
		printf("%d\n", h->n);
		abd++;
		h = h->next;
	}

	return (abd);
}

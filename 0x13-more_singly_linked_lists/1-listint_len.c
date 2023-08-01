#include "lists.h"

/**
 * listint_len - returns the number of elements in lists
 * @h:linked list of listint_t
 * Return: number of all nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t abd = 0;

	while (h)
	{
		abd++;
		h = h->next;
	}

	return (abd);
}

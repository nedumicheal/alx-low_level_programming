#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of list
 * @h: the linked list of type listint_t
 * Return: number of all nodes
 * format: let the code decide
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

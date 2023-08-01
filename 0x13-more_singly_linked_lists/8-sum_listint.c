#include "lists.h"

/**
 * sum_listint - calculates the sum of data in the list
 * @head: first node of the linked list
 * Return: the resulting sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *into = head;

	while (into)
	{
		total += into->n;
		into = into->next;
	}

	return (total);
}

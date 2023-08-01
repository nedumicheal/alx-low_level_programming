#include "lists.h"

/**
 * reverse_listint - it reverses a linked list
 * @head: points to the first node of list
 * Return: points to the first node of the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node of the list
 * @head: points to the first element on list
 * Return: data inside the elements that was deleted, 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *into;
	int asbd;

	if (!head || !*head)
		return (0);

	asbd = (*head)->n;
	into = (*head)->next;
	free(*head);
	*head = into;

	return (asbd);
}

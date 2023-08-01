#include "lists.h"

/**
 * add_nodeint - adds new node to beginning of linked_list
 * @head: points to the first node in the list
 * @n: data to insert in new node
 * Return: points to new node, NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *dew;

	dew = malloc(sizeof(listint_t));
	if (!dew)
		return (NULL);

	dew->n = n;
	dew->next = *head;
	*head = dew;

	return (dew);
}

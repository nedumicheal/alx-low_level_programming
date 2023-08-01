#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end list
 * @head: points to the first element in the list
 * @n: data to insert in element
 * Return: points to the new node, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *into;
	listint_t *stand = *head;

	into = malloc(sizeof(listint_t));
	if (!into)
		return (NULL);

	into->n = n;
	into->next = NULL;

	if (*head == NULL)
	{
		*head = into;
		return (into);
	}

	while (stand->next)
		stand = stand->next;

	stand->next = into;

	return (into);
}

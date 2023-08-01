#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node of list at certain index
 * @head: points to the first element of the list
 * @index: the index of the node to be deleted
 * Return: if 1 = Success, if -1 Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *into = *head;
	listint_t *now = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(into);
		return (1);
	}

	while (i < index - 1)
	{
		if (!into || !(into->next))
			return (-1);
		into = into->next;
		i++;
	}


	now = into->next;
	into->next = now->next;
	free(now);

	return (1);
}

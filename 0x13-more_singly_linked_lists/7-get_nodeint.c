#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index of a list
 * @head: first node of the linked list
 * @index: the index of the node to return
 * Return: points to the node, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q = 0;
	listint_t *into = head;

	while (into && q < index)
	{
		into = into->next;
		q++;
	}

	return (into ? into : NULL);
}

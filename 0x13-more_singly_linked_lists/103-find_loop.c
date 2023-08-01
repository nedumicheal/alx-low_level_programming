#include "lists.h"

/**
 * find_listint_loop - all the loop in a list
 * @head: linked list
 * Return: address of the node where the loop started or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dx = head;
	listint_t *dy = head;

	if (!head)
		return (NULL);

	while (dx && dy && dy->next)
	{
		dy = dy->next->next;
		dx = dx->next;
		if (dy == dx)
		{
			dx = head;
			while (dx != dy)
			{
				dx = dx->next;
				dy = dy->next;
			}
			return (dy);
		}
	}

	return (NULL);
}

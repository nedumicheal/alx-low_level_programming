#include "lists.h"

/**
 * free_listint_safe - it releases a list
 * @h: points to the first node of the linked list
 * Return: returns the number of elements in the released list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t avg = 0;
	int xy;
	listint_t *zord;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		xy = *h - (*h)->next;
		if (xy > 0)
		{
			zord = (*h)->next;
			free(*h);
			*h = zord;
			avg++;
		}
		else
		{
			free(*h);
			*h = NULL;
			avg++;
			break;
		}
	}

	*h = NULL;

	return (avg);
}

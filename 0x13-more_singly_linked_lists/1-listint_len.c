#include "lists.h"

/**
 * listint_len - returns the number of all elements in linked lists
 * @h: linked list of listint_t to traverse
 * Return: number of all nodes
 */

size_t listint_len(const listint_t *h)
{
 size_t abc = 0;

 while (h)
 {
 num++;
 h = h->next;
 }

 return (abc);
}

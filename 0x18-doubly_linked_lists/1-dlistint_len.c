#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: header node pointer.
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}

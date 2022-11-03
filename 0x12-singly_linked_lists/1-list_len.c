#include "lists.h"

/**
 *list_len - function that returns the number of elements
 *in a linked list_t list.
 *@h: header node pointer.
 *Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	int node_count = 0;

	while (p)
	{
		p = p->next;
		node_count++;
	}
	return (node_count);
}

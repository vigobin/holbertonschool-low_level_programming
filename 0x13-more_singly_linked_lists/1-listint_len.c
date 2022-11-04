#include "lists.h"

/**
 *listint_len - function that returns the number of elements
 *in a linked listint_t list.
 *@h: header node pointer.
 *Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	int node_count = 0;

	while (node)
	{
		node = node->next;
		node_count++;
	}
	return (node_count);
}

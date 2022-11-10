#include "lists.h"

/**
 * print_dlistint_backward - prints all the elements of a dlistint_t
 *  list backwards.
 * @h: pointer to head node.
 * Return: the number of nodes.
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t node_count = 1;

	while (h->next)
	{
		h = h->next;
		node_count++;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}

	return (node_count);
}

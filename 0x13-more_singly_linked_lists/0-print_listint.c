#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head node pointer.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	int node_count = 0;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		node_count++;
	}
	return (node_count);
}

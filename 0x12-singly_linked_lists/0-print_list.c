#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: head node.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	const list_t *p = h;
	int node_count = 0;

	while (p)
	{
		if (!p->str)
		{
			printf("[0] (nil)\n");
			p = p->next;
			node_count++;
		}
		else
		{
			printf("[%d] %s\n", p->len, p->str);
			p = p->next;
			node_count++;
		}
	}
	return (node_count);
}

#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: start of node.
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}

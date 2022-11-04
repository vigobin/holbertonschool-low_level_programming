#include "lists.h"

/**
 * free_listint - function that frees a list.
 * @head: start of node.
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

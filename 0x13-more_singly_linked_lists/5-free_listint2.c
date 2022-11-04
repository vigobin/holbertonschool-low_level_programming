#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 *  function sets the head to NULL.
 * @head: start of node.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (!head)
		return;

	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	head = NULL;
}

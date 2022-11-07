#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t.
 * @head: pointer to head of node.
 * Return: head node’s data (n). If the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!*head)
		return (0);

	temp = *head;
	node = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (node);
}

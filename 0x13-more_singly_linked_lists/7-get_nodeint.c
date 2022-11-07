#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to head node.
 * @index: index of node starting at 0.
 * Return: nth node or NULL if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}

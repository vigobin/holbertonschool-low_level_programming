#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 *  index of a dlistint_t linked list.
 * @head: pointer to head node.
 * @index: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy = *head;

	if (!*head)
		return (-1);
	for (; index != 0; index--)
	{
		if (!copy)
			return (-1);
		copy = copy->next;
	}

	if (copy == *head)
	{
		*head = copy->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		copy->prev->next = copy->next;
		if (copy->next)
			copy->next->prev = copy->prev;
	}
	free(copy);
	return (1);
}

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
	dlistint_t *temp, *copy = *head;
	unsigned int node;

	if (!copy)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		if (*head)
			(*head)->prev = NULL;

		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (!copy->next)
			return (-1);
		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}

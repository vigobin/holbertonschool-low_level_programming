#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head of node.
 * @str: string input.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *copy;
	int node_count = 0;
	list_t *newnode, *last_node;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	copy = strdup(str);

	while (str[node_count])
		node_count++;
	newnode->len = node_count;

	newnode->str = copy;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}

	last_node = *head;

	while (last_node->next)
		last_node = last_node->next;

	last_node->next = newnode;
	return (newnode);
}

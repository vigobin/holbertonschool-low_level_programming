#include "lists.h"

/*
 *add_node - function that adds a new node at the beginning of a list_t list.
 *@head: header node pointer.
 *@str: string to be duplicated.
 *Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len = 0;

	list_t* newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	copy = strdup(str);

	while(str[len])
		len++;

	newnode->str = copy;
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

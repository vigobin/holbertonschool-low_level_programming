#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table.
 * Return: no return value.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int comma_print = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			if (comma_print == 1)
				printf(", ");
			comma_print = 1;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * hash_table_delete – Deletes the table
 * @hash_table: pointer the hash table
 */
void hash_table_delete(hash_table_t *hash_table)
{
	hash_table_t *head = hash_table;
	hash_node_t *node, *tmp_node;
	unsigned long int initial;

	for (initial = 0; initial < hash_table->size; initial++)
	{
		if (hash_table->array[initial] != NULL)
		{
			node = hash_table->array[initial];
			while (node != NULL)
			{
				tmp_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp_node;
			}
		}
	}
	free(head->array);
	free(head);
}


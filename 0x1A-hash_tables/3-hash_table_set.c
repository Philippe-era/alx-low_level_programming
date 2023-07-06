#include "hash_tables.h"

/**
 * hash_table_set – MODIFY HASH TABLE
 * @ht: hash table to be pointer
 * @key: add number to key
 * @value: value to be checked
 *
 * Return: Success always 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *v_duplicate;
	unsigned long int node_num, initial;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_duplicate = strdup(value);
	if (v_duplicate == NULL)
		return (0);

	node_num = key_node_num((const unsigned char *)key, ht->size);
	for (initial = node_num; ht->array[initial]; initial++)
	{
		if (strcmp(ht->array[initial]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_duplicate;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(v_duplicate);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = v_duplicate;
	new_node->next = ht->array[node_num];
	ht->array[node_num] = new_node;

	return (1);
}


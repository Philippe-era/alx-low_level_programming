#include "hash_tables.h"

/**
 * hash_table_get - Gets the relevant information from hash table
 * @ht: points to the pointer form has table
 * @key: key value to be checked
 * Return: Always return 1 to make sure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node_num;
	unsigned long int index_num;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index_num = key_index((const unsigned char *)key, ht->size);
	if (index_num >= ht->size)
		return (NULL);

	node_num = ht->array[index_num];
	while (node_num && strcmp(node_num->key, key) != 0)
		node_num = node_num->next;

	return ((node_num == NULL) ? NULL : node_num->value);
}

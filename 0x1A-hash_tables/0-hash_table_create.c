#include "hash_tables.h"

/**
 * hash_table_create – Hash cables tables created
 * @size: size of arrays
 * Return: if error null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int initial;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);
	for (initial = 0; initial < size; initial++)
		hash_table->array[initial] = NULL;

	return (hash_table);
}


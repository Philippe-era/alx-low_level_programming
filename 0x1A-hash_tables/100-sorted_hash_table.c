#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
void shash_table_delete(shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print_rev(const shash_table_t *ht);



/**
 * shash_table_set – an element will be added
 * @ht: points to the hash table
 * @key: the key pair we need from the array
 * @value: The number we need to get and see
 * Return: Success always 1 unless otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp_node;
	char *variable_copy;
	unsigned long int index_num;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	variable_copy = strdup(value);
	if (variable_copy == NULL)
		return (0);

	index_num = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->shead;
	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			free(tmp_node->value);
			tmp_node->value = variable_copy;
			return (1);
		}
		tmp_node = tmp_node->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(variable_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(variable_copy);
		free(new_node);
		return (0);
	}
	new_node->value = variable_copy;
	new_node->next = ht->array[index_num];
	ht->array[index_num] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		tmp_node = ht->shead;
		while (tmp_node->snext != NULL && strcmp(tmp_node->snext->key, key) < 0)
			tmp_node = tmp_node->snext;
		new_node->sprev = tmp_node;
		new_node->snext = tmp_node->snext;
		if (tmp_node->snext == NULL)
			ht->stail = new_node;
		else
			tmp_node->snext->sprev = new_node;
		tmp_node->snext = new_node;
	}

	return (1);
}
/**
 * shash_table_create – a hash table will be created
 * @size: The length of the hash table
 * Return : a sorted hash tablewill be returned
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	unsigned long int initial;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);
	for (initial = 0; initial < size; initial++)
		hash_table->array[initial] = NULL;
	hash_table->shead = NULL;
	hash_table->stail = NULL;

	return (hash_table);
}


/**
 * shash_table_get – Returns the table get we check and know before it all
 * @ht: Point to the sash table
 * @key: The value in which the key will come from
 * Return: A stash will be returned
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node_num;
	unsigned long int index_num;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index_num = key_index((const unsigned char *)key, ht->size);
	if (index_num >= ht->size)
		return (NULL);

	node_num = ht->shead;
	while (node_num != NULL && strcmp(node_num->key, key) != 0)
		node_num = node_num->snext;

	return ((node_num == NULL) ? NULL : node_num->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node_num;

	if (ht == NULL)
		return;

	node_num = ht->shead;
	printf("{");
	while (node_num != NULL)
	{
		printf("'%s': '%s'", node_num->key, node_num->value);
		node_num = node_num->snext;
		if (node_num != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node_num;

	if (ht == NULL)
		return;

	node_num = ht->stail;
	printf("{");
	while (node_num != NULL)
	{
		printf("'%s': '%s'", node_num->key, node_num->value);
		node_num = node_num->sprev;
		if (node_num != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head_node = ht;
	shash_node_t *node_num, *tmp_node;

	if (ht == NULL)
		return;

	node_num = ht->shead;
	while (node_num)
	{
		tmp_node = node_num->snext;
		free(node_num->key);
		free(node_num->value);
		free(node_num);
		node_num = tmp_node;
	}

	free(head_node->array);
	free(head_node);
}


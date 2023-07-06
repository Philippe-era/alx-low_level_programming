#include "hash_tables.h"

/**
 * key_index - index of hast tables
 * @key: the key to get the value
 * @size: The length of the array
 *
 * Return: The number of array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}


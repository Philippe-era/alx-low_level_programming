#include "hash_tables.h"

/**
 * hash_djb2 - Hash function
 * @str: string to hash
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_table;
	int cat_hash;

	hash_table = 5381;
	while ((cat_hash = *str++))
		hash_table = ((hash_table << 5) + hash_table) + cat_hash;

	return (hash_table);
}


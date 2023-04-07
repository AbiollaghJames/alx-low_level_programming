#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 * Return: newly created hash tbale
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	return (table);
}

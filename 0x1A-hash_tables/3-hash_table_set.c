#include "hash_tables.h"
/**
 * hash_table_set - adds new element to a hash table
 * @ht: the hash table
 * @key: key where we're going to add the element
 * @value: Value at the key
 * Return: 1 on suceess else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	return (1);
}

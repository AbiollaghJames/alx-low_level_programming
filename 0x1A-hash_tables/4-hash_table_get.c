#include "hash_tables.h"
/**
 * hash_table_get - retrieves value of associated key
 * @ht: hash tables to be worked upon
 * @key: key to retriev its value
 * Return: value of key or NULL if there is no key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (0);
}

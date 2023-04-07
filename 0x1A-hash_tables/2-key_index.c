#include "hash_tables.h"
/**
 * key_index - Gets index of a key of  hash table
 * @key: key with which to get it's index
 * @size: sie of hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;
	unsigned long int hash_value = hash_djb2(key);

	index = hash_value % size;

	return (index);
}

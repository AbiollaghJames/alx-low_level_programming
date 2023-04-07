#include "hash_tables.h"
/**
 * hash_djb2 - computes the hash of char array str
 * @str: string to compute it's hash value
 * Return: hash of the string str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;
	
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

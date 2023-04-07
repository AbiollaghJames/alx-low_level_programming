#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: key value pair of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;
	int f_node; /* flag used to prevent printing comma b4 1st key value pair*/

	if (!ht)
		return;

	printf("{");
	f_node = 1;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp != NULL)
		{
			if (!f_node)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			f_node = 0;
			temp = temp->next;
		}
	}
	printf("}\n");
}

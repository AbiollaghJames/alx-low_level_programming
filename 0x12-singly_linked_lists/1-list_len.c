#include "lists.h"
/**
 * list_len - number of items
 * @h: param
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

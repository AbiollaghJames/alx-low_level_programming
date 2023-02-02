#include "lists.h"
/**
 * listint_len - prints number of elements
 * @h: pointer to first node
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elems = 0;

	while (h)
	{
		elems++;
		h = h->next;
	}
	return (elems);
}

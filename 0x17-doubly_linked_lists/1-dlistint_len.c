#include "lists.h"
/**
 * dlistint_len - function
 * @h: param
 * Return: No of elements in a dlist
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int elems = 0;

	while (h != NULL)
	{
		elems += 1;
		h = h->next;
	}
	return (elems);
}

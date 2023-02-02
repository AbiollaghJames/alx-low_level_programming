#include "lists.h"
/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to firts node
 * Return: Number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int elems = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elems++;
		h = h->next;
	}
	return (elems);
}

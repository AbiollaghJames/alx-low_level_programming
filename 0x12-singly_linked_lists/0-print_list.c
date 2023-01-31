#include "lists.h"
/**
 * print_list - prints elements of list_t
 * @h: parameter
 * Return: Number of node
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}

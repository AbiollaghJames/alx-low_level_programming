#include <lists.h>
/**
 * list_len - counts elements
 * @h: par 1
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

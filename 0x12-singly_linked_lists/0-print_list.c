#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints elements of list
 * @h: pointer to struct list
 * Return: Number of node
 */
size_t print_list(const list_t *h)
{
       size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}

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
	int count = 0;

	if (str == NULL)
		printf("[0] (nill)");

	while (h != NULL)
	{
		count++;
		h = h->link;
	}
	printf("%d", count);
}

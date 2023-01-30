#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * h - par 1
 * print_list: prints all elements of list
 * Return: Number of node
 */
size_t priint_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

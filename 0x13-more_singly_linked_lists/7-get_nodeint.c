#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of a list
 * @head: pointer to first node
 * @index: position of the node
 * Return: returns nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}
	return (head);
}

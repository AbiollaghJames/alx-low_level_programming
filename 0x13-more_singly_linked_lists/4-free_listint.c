#include "lists.h"
/**
 * free_listint - free a list
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	return (0);
}

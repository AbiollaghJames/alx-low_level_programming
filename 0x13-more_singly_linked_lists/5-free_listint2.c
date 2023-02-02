#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
	}
	*head = NULL;
}

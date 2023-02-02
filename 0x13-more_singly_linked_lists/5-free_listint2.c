#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (head != NULL)
	{
		temp = *head;

		while ((ptr = temp) != NULL)
		{
			temp = temp->next;
			free(ptr);
		}
		*head = NULL;
	}
}

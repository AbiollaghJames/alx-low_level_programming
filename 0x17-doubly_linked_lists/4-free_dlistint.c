#include "lists.h"
/**
 * free_dlistint - function
 * @head: pointer to first node
 * Return: 0 on sucess
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *trav_ptr = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		trav_ptr = head;
		head = head->next;
		free(trav_ptr);
	}
	free(head);
}

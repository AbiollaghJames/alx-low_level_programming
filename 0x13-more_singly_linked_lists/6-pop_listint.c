#include "lists.h"
/**
 * pop_listint - deletes head node of a list
 * @head: head of list
 * Return: head node data (n)
 */
int pop_listint(listint_t **head)
{
	int head_node_data;
	listint_t *ptr, *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	head_node_data = temp->n;
	ptr = temp->next;
	free(temp);
	*head = ptr;

	return (head_node_data);
}

#include "lists.h"
/**
 * add_dnodeint - A function
 * @head: param
 * @n: data
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->prev = NULL;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}

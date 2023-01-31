#include "lists.h"
/**
 * add_node - adds node at begining of lists
 * @head: pointer to pointer of head of list
 * @str: new data
 * Return: new or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;

	new_node = malloc(sizeof(lists_t));

	if (new_node == NULL)
		return (0);
	new_node->str = strdup(str);

	if (!str)
	{
		free(new_node);
		return (0);
	}
	while (str[len])
		len++;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

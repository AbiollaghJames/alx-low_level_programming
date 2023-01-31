#include "lists.h"
#include <string.h>
/**
 * add_node - adds node at begining of lists
 * @head: pointer to pointer of head of list
 * @str: new data
 * Return: new or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);

	while (str[len] != '\0')
	{
		len++;
	}
	new_node->len = len;

	if (*head != NULL)
		new_node->next = *head;

	if (*head == NULL)
		new_node->next = NULL;

	*head = new_node;
	return (*head);
}

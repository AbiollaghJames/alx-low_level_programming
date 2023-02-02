#include "lists.h"
/**
 * sum_listint - sums all data of data(n)
 * @head: pointer to first node
 * Return: sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

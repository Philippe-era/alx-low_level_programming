#include "lists.h"

/**
 * sum_dlistint - double linked list you check
 * @head: soro for the double linked list
 * Return: result
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int result = 0;

	while (node)
	{
		result += node->n;
		node = node->next;
	}

	return (result);
}

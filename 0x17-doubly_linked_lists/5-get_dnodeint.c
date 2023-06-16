#include "lists.h"

/**
 * get_dnodeint_at_index - rode we up you check
 * @head: kanda
 * @index: numbers nommers you check
 * Return: cest la vie 
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node_check = head;
	unsigned int count = 0;

	while (node_check && count != index)
	{
		count++;
		node_check = node_check->next;
	}
	if (node_check && count == index)
		return (node_check);
	return (NULL);
}


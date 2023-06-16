#include "lists.h"

/**
 * insert_dnodeint_at_index - isa check you cava
 * @h: header check
 * @idx: leave him that one index
 * @n: number check
 * Return: addrress
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *help_node = *h, *node_new;
	unsigned int num, count = 0;

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
		return (NULL);
	node_new->n = n;

	if (idx == 0)
	{
		node_new->prev = NULL;
		node_new->next = *h;
		if (*h)
			(*h)->prev = node_new;
		*h = node_new;
		return (*h);
	}

	num = idx - 1;
	while (help_node && count != num)
	{
		count++;
		help_node = help_node->next;
	}

	if (count == num && help_node)
	{
		node_new->prev = help_node;
		node_new->next = help_node->next;
		if (help_node->next)
			help_node->next->prev = node_new;
		help_node->next = node_new;
		return (node_new);
	}
	free(node_new);
	return (NULL);
}

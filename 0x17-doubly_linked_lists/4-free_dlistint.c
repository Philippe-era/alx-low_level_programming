#include "lists.h"

/**
 * free_dlistint - leave it thats wassup
 * @head: lists wassup my gee
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	dlistint_t *node_next;

	if (head)
	{
		current_node = head;
		node_next = head->next_node;
		while (node_next)
		{
			free(current_node);
			current_node = node_next;
			node_next = node_next->next_node;
		}
		free(current_node);
	}
}

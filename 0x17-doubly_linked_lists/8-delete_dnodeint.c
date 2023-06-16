#include "lists.h"

/**
 * delete_dnodeint_at_index – finishing index soon
 * @head: head tag till be noded
 * @index: numbers
 * Return: 0 success otherwise fail
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *help_node = *head;
	dlistint_t *deleted_node = *head;
	unsigned int num;
	int fail = -1;
	unsigned int count = 0;

	if (!(*head))
		return (fail);

	if (index == 0)
	{
		*head = deleted_node->next;
		free(deleted_node);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	num = index - 1;
	while (help_node && count != num)
	{
		count++;
		help_node = help_node->next;
	}

	if (count == num && help_node)
	{
		deleted_node = help_node->next;
		if (deleted_node->next)
		deleted_node->next->prev = help_node;
		help_node->next = deleted_node->next;
		free(deleted_node);
		return (1);
	}

	return (fail);
}


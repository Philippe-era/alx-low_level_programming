#include "lists.h"

/**
 * add_dnodeint_end - checks wassup going forward
 * @head: point first_element
 * @n: int_node
 * Return: address_the new element
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_check, *help = *head;

	node_check = malloc(sizeof(dlistint_t));
	if (node_check == NULL)
		return (NULL);
	node_check->n = n;
	node_check->next = NULL;

	if (help)
	{
		while (help->next)
			help = help->next;
		node_check->prev = help;
		help->next = node_check;
	}
	else
	{
		*head = node_check;
		node_check->prev = NULL;
	}

	return (node_check);
}


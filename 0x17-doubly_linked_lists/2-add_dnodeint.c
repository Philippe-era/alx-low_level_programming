#include "lists.h"

/**
 * add_dnodeint - add integers you check
 * @head: head finished 90 minutes
 * @n:new node
 * Return: Double linked lists
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_check;

	node_check = malloc(sizeof(dlistint_t));
	if (node_check == NULL)
		return (NULL);
	node_check->n = n;
	node_check->prev = NULL;
	node_check->next = *head;
	if (*head)
		(*head)->prev = node_check;
	*head = node_check;

	return (node_check);
}

#include "lists.h"

/**
 * print_dlistint - doubled linked list
 * @h: parameter to be checked
 * Return: the result
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node_check = h;
	size_t count = 0;

	while (node_check)
	{
		printf("%i\n", node_check->num);
		count++;
		node_check = node_check->next_node;
	}
	return (count);
}

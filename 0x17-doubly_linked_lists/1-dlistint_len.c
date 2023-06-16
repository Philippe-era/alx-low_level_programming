#include "lists.h"

/**
 * dlistint_len - the return of the the len
 * @h: parameter
 * Return: double linked list to show
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}

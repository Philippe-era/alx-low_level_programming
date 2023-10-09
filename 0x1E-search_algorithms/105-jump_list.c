#include "search_algos.h"

/**
 * jump_list - jump search to look for items
 * @list: points to the head of the search
 * @size: The count of nodes in the array
 * @value: what we looking for
 *
 * Return: present yes absent no
 *
 * Description: displays the information in line for context
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step_check, step_count;
	listint_t *node_check, *jump_look;

	if (list == NULL || size == 0)
		return (NULL);

	step_check = 0;
	step_count = sqrt(size);
	for (node_check = jump_look = list; jump_look->index + 1 <
	size && jump_look->n < value;)
	{
		node_check = jump_look;
		for (step_check += step_count; jump_look->index <
		step_check; jump_look = jump_look->next)
		{
			if (jump_look->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n",
		jump_look->index, jump_look->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node_check->index, jump_look->index);

	for (; node_check->index < jump_look->index && node_check->n <
	value; node_check = node->next)
		printf("Value checked at index [%ld] = [%d]\n",
		node_check->index, node_check->n);
	printf("Value checked at index [%ld] = [%d]\n",
		node_check->index, node_check->n);

	return (node_check->n == value ? node_check : NULL);
}


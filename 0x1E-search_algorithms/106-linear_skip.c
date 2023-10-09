#include "search_algos.h"

/**
 * linear_skip - linear skip check for search
 * @list: where we looking for it.
 * @value: what we looking for
 *
 * Return: present show if not absent
 *
 * Description: displays the relevant information needed going forward
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node_check, *jump_list;

	if (list == NULL)
		return (NULL);

	for (node_check = jump_list = list; jump_list->next != NULL
	&& jump_list->n < value;)
	{
		node_check = jump_list;
		if (jump_list->express != NULL)
		{
			jump_list = jump_list->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump_list->index, jump_list->n);
		}
		else
		{
			while (jump_list->next != NULL)
				jump_list = jump_list->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node_check->index, jump_list->index);

	for (; jump_list->index < jump_list->index && node_check->n < value;
	node_check = node_check->next)
		printf("Value checked at index [%ld] = [%d]\n",
		node_check->index, node_check->n);
	printf("Value checked at index [%ld] = [%d]\n",
	node_check->index, node_check->n);

	return (node_check->n == value ? node_check : NULL);
}


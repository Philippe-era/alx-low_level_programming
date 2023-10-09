#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - value will be looked for in the array
 * @array: where we will be searching
 * @size: the number of elements in the array
 * @value: value we are checking for
 *
 * Return: the position of the item is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t initial = 0;

	if (!array || size == 0)
		return (-1);

	while (initial < size)
	{
		printf("Value checked array[%lu] = [%d]\n", initial, array[initial]);
		if (array[initial] == value)
			return (initial);
		initial++;
	}

	return (-1);
}


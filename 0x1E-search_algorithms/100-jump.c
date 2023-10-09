#include "search_algos.h"

/**
  * jump_search - Searches for the value in the array by jumping
  * @array: A pointer to the array in the list
  * @size: number of elements in the array
  * @value: the item we looking for
  *
  * Return: Value will be returned if present otherwise absent
  *
  * Description: display square root of the value
  */
int jump_search(int *array, size_t size, int value)
{
	size_t initial, jump_next, step_check;

	if (array == NULL || size == 0)
		return (-1);

	step_check = sqrt(size);
	for (initial = jump_next = 0; jump_next < size && array[jump_next] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump_next, array[jump_next]);
		initial = jump_next;
		jump_next += step_check;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", initial, jump_next);

	jump_next = jump_next < size - 1 ? jump_next : size - 1;
	for (; initial < jump_next && array[initial] < value; initial++)
		printf("Value checked array[%ld] = [%d]\n", initial, array[initial]);
	printf("Value checked array[%ld] = [%d]\n", initial, array[initial]);

	return (array[initial] == value ? (int)initial : -1);
}


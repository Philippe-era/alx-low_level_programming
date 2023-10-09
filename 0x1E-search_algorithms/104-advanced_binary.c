#include "search_algos.h"

/**
  * advanced_binary_recursive - recursive check in the array
  * @array: where we looking fofr
  * @left: the start of the array
  * @right: the last in the array
  * @value: The value to search for.
  *
  * Return: if present yes if not no
  * Description: displays the array in check
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t initial;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (initial = left; initial < right; initial++)
		printf("%d, ", array[initial]);
	printf("%d\n", array[initial]);

	initial = left + (right - left) / 2;
	if (array[initial] == value &&
	(initial == left || array[initial - 1] != value))
		return (initial);
	if (array[initial] >= value)
		return (advanced_binary_recursive(array, left, initial, value));
	return (advanced_binary_recursive(array, initial + 1, right, value));
}

/**
  * advanced_binary -advanced binary search
  * @array: where we are searching
  * @size: number of items in array
  * @value: what we looking for
  *
  * Return: if value present yes if not absent no
  *
  * Description: displays a the sub array
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}


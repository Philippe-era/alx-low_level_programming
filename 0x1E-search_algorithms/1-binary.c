#include "search_algos.h"

/**
  * binary_search - looks for a value in the sorted array
  * @array: the element in which the item will be found
  * @size: the count of all items
  * @value: what we looking for
  *
  * Return: If value is 1 success o false
  * Description: displays the sub array
  */
int binary_search(int *array, size_t size, int value)
{
	size_t initial, left_point, right_point;

	if (array == NULL)
		return (-1);

	for (left_point = 0, right_point = size - 1; right_point >= left_point;)
	{
		printf("Searching in array: ");
		for (initial = left_point; initial < right_point; initial++)
			printf("%d, ", array[initial]);
		printf("%d\n", array[initial]);

		initial = left_point + (right_point - left_point) / 2;
		if (array[initial] == value)
			return (initial);
		if (array[initial] > value)
			right_point = initial - 1;
		else
			left_point = initial + 1;
	}

	return (-1);
}


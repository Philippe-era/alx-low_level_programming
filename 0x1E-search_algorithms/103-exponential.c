#include "search_algos.h"

/**
  * exponential_search - Looks expoentially for the value in array
  * @array: looks in this container
  * @size: Counts where it will look for the value
  * @value: The value we will be looking for
  *
  * Return: if value present success if absent null
  *
  * Description: displays the relevant information
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t initial = 0, right_look;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (initial = 1; initial < size && array[initial] <=
		value; initial = initial * 2)
			printf("Value checked array[%ld] = [%d]\n", initial, array[initial]);
	}

	right_look = initial < size ? initial : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n",
	initial / 2, right_look);
	return (_binary_search(array, initial / 2, right_look, value));
}

/**
  * _binary_search - we looking binary wise
  * @array: Points to the aray
  * @left: The first index
  * @right: The last index
  * @value: The value we looking for
  *
  * Return: value present show if absent = null
  *
  * Description: displays sub array being looked for
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t initial;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (initial = left; initial < right; initial++)
			printf("%d, ", array[initial]);
		printf("%d\n", array[initial]);

		initial = left + (right - left) / 2;
		if (array[initial] == value)
			return (initial);
		if (array[initial] > value)
			right = initial - 1;
		else
			left = initial + 1;
	}

	return (-1);
}



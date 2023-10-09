#include "search_algos.h"

/**
  * interpolation_search - interpolation search is in process
  * @array: checks is happening here
  * @size: size in the array
  * @value: what we looking for
  *
  * Return: array is present displayus value if not value = null
  *
  * Description: =displays an element after comparison
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t initial, lookup, read_line;

	if (array == NULL)
		return (-1);

	for (lookup = 0, read_line = size - 1; read_line >= lookup;)
	{
		initial = lookup + (((double)(read_line - lookup) /
		(array[read_line] - array[lookup])) * (value - array[lookup]));
		if (initial < size)
			printf("Value checked array[%ld] = [%d]\n", initial, array[initial]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", initial);
			break;
		}

		if (array[initial] == value)
			return (initial);
		if (array[initial] > value)
			read_line = initial - 1;
		else
			lookup = initial + 1;
	}

	return (-1);
}


#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional storage of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **storage;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	storage = (int **) malloc(sizeof(int *) * height);

	if (storage == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		storage[i] = (int *) malloc(sizeof(int) * width);
		if (storage[i] == NULL)
		{
			free(storage);
			for (j = 0; j <= i; j++)
				free(storage[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			storage[i][j] = 0;
		}
	}
	return (storage);
}


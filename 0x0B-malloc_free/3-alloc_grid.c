#include "main.h"

/**
 * alloc_grid - points to two dimensional array
 * @width: of array
 * @height: of array
 * Return: point to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, k;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int) * width);
	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (k = 0; k < width; k++)
					array[i][k] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i++;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}

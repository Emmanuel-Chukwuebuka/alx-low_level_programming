#include "main.h"
#include <stdlib.h>

/**
 * array_range - to create an array of int.
 * @min: first integer
 * @max: last or max int.
 * Return: point to the new memory
 */

int *array_range(int min, int max)
{
	int i, l;
	int @a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		a[i] = min;
	}
	return (a);
}
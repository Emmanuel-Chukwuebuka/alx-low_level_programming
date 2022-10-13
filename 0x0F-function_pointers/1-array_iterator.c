#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter as an array.
 * @array: input integer array.
 * @size: the size of the array.
 * @action: the pointer to the function.
 * Return: return nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)

		for (a = 0; a < size; a++)
			action(array[a]);
}

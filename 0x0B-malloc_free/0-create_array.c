#include "main.h"

/**
 * create_array - it creates and array of chars with specific char
 * @size: size of the array
 * @c: char to insert
 * Return: null if it fails or size zero
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		array[counter] = c;

	return (array);
}

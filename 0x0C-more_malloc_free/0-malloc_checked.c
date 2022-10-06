#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocateand check memory using malloc
 * @b: allocated memory
 * Return: return pointer or terminate if error found
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}

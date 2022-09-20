#include "main.h"

/**
 * swap_int - to swap integer
 * @a: first integer
 * @b: second one
 * Return: zero
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

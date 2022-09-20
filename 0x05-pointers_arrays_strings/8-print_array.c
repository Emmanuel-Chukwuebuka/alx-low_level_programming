#include <stdio.h>
#include "main.h"

/**
 * print_array - prins the array elements
 * @a: array
 * @n: number of the elements
 * Return: nothing
 */

void print_array(int *a, int n)
{	
	int c;

	for (c = 0; c < n; c++)
	{
		if (c != n - 1)
			printf("%d, ", a[c]);
		else
			printf("%d", a[c]);
	}
	putchar(10);
}
